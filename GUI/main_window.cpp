//
// Created by tsv on 22.03.17.
//

#include "main_window.hpp"

MainWindow::MainWindow()
		: ui(new Ui::MainWindow)
		, solver(new Solver)
{
	ui->setupUi(this);
	connect_slots();

	read_settings();
	reset_g();
}

MainWindow::~MainWindow()
{
	delete ui;
	solver->deleteLater();
}

void
MainWindow::start()
{
	ui->params_tab_widget->setDisabled(true);
	ui->button_g_reset->setDisabled(true);
	ui->button_run->setDisabled(true);
	ui->button_run->setText("Стоп");
	ui->button_run->disconnect();
	connect(ui->button_run, &QPushButton::released, this, &MainWindow::stop);

	solver->start();

	ui->button_run->setEnabled(true);
}

void
MainWindow::stop()
{
	ui->button_run->setDisabled(true);
	ui->button_run->setText("Старт");
	ui->button_run->disconnect();
	connect(ui->button_run, &QPushButton::released, this, &MainWindow::start);

	solver->stop();

	ui->params_tab_widget->setEnabled(true);
	ui->button_run->setEnabled(true);
	ui->button_g_reset->setEnabled(true);
}

void
MainWindow::update_g_chart(QVector<QPointF> points)
{
	ui->g_series->replace(points);
}

void
MainWindow::update_u(qreal u)
{
	ui->edit_u->setText(QString::number(u));
}

void
MainWindow::reset_g()
{
	auto y = vector<float>(solver->solver->get_n(), 1.0f);
	y[0] = 0.0f;
	solver->solver->set_y(y);

	QVector<QPointF> data;
	auto x = solver->solver->get_x();

	size_t size = y.size();
	for (auto i = 0; i < size; ++i) {
		data.append({x[i], y[i]});
	}

	update_g_chart(data);
}

void
MainWindow::on_reset_button()
{
	auto reply = QMessageBox::question(this, "Подтвердить сброс", "Сбросить g к начальному приближению?",
									   QMessageBox::Yes | QMessageBox::No);
	if (reply == QMessageBox::Yes) {
		reset_g();
	}
}

void
MainWindow::closeEvent(QCloseEvent* event)
{
	write_settings();
	QWidget::closeEvent(event);
}

void
MainWindow::connect_slots()
{
	auto& s = solver->solver;

	connect_responding_field(ui->edit_n, &QLineEdit::editingFinished, s->get_n());
	connect_responding_field(ui->edit_h, &QLineEdit::editingFinished, s->get_h());

	connect_field(ui->edit_x_1, &QLineEdit::editingFinished, s->get_x_1());
	connect_field(ui->edit_t_end, &QLineEdit::editingFinished, s->get_t_end());
	connect_field(ui->edit_tau, &QLineEdit::editingFinished, s->get_tau());

	connect(ui->edit_update_period, &QLineEdit::editingFinished, this, [this] {
		solver->set_emit_period(ui->edit_update_period->text().toUInt());
	});
	connect(ui->edit_eps_u, &QLineEdit::editingFinished, this, [this] {
		solver->set_eps_u(ui->edit_eps_u->text().toDouble());
	});

	connect_field(ui->edit_A_k, &QLineEdit::editingFinished, s->params.A_k);
	connect_field(ui->edit_E_a, &QLineEdit::editingFinished, s->params.E_a);
	connect_field(ui->edit_G_t, &QLineEdit::editingFinished, s->params.G_t);
	connect_field(ui->edit_C_pt, &QLineEdit::editingFinished, s->params.C_pt);
	connect_field(ui->edit_T_s0, &QLineEdit::editingFinished, s->params.T_s0);
	connect_field(ui->edit_T_s, &QLineEdit::editingFinished, s->params.T_s);
	connect_field(ui->edit_T_max, &QLineEdit::editingFinished, s->params.T_max);
	connect_field(ui->edit_R_s, &QLineEdit::editingFinished, s->params.R_s);
	connect_field(ui->edit_R_max, &QLineEdit::editingFinished, s->params.R_max);
	connect_field(ui->edit_lambda, &QLineEdit::editingFinished, s->params.lambda);
	connect_field(ui->edit_C_p, &QLineEdit::editingFinished, s->params.C_p);
	connect_field(ui->edit_p_k, &QLineEdit::editingFinished, s->params.p_k);
	connect_field(ui->edit_q_r, &QLineEdit::editingFinished, s->params.q_r);
	connect_field(ui->edit_rho_t, &QLineEdit::editingFinished, s->params.rho_t);

	connect(ui->button_run, &QPushButton::released, this, &MainWindow::start);
	connect(ui->button_g_reset, &QPushButton::released, this, &MainWindow::on_reset_button);

	connect(solver, &Solver::send_data, this, &MainWindow::update_g_chart);
	connect(solver, &Solver::send_u, this, &MainWindow::update_u);
	connect(solver, &Solver::finished, this, &MainWindow::stop);
}

template<typename S, typename Func1, typename V1>
void
MainWindow::connect_field(S* sender, Func1 signal, V1& value)
{
	connect(sender, signal, this,
			[sender, &value]() {
				QString text = sender->text();
				value = text.toDouble();
			}
	);
}

template<typename S, typename Func1, typename V1>
void
MainWindow::connect_responding_field(S* sender, Func1 signal, V1& value)
{
	connect_field(sender, signal, value);
	value.connect(
			[this, sender, &value] {
				sender->setText(QString::number(value));
			}
	);
}

void
MainWindow::write_settings()
{
	QSettings settings("tsv", "BurnProblem");

	auto save = [&settings](const QLineEdit* line_edit) {
		const QString value = line_edit->text();
		if (!value.isEmpty()) {
			settings.setValue(line_edit->objectName(), value);
		}
	};

	settings.beginGroup("controls/grid");
	save(ui->edit_n);
	save(ui->edit_x_1);
	save(ui->edit_t_end);
	save(ui->edit_tau);
	save(ui->edit_update_period);
	save(ui->edit_eps_u);
	settings.endGroup();

	settings.beginGroup("controls/params");
	save(ui->edit_A_k);
	save(ui->edit_E_a);
	save(ui->edit_G_t);
	save(ui->edit_C_pt);
	save(ui->edit_T_s0);
	save(ui->edit_T_s);
	save(ui->edit_T_max);
	save(ui->edit_R_s);
	save(ui->edit_R_max);
	save(ui->edit_lambda);
	save(ui->edit_C_p);
	save(ui->edit_p_k);
	save(ui->edit_q_r);
	save(ui->edit_rho_t);
	settings.endGroup();
}

void
MainWindow::read_settings()
{
	QSettings settings("tsv", "BurnProblem");

	auto restore = [&settings](QLineEdit* line_edit, const QString& default_val) {
		line_edit->setText(settings.value(line_edit->objectName(), default_val).toString());
		line_edit->editingFinished();
	};

	settings.beginGroup("controls/grid");
	restore(ui->edit_n, "4096");
	restore(ui->edit_x_1, "1e-2");
	restore(ui->edit_t_end, "1");
	restore(ui->edit_tau, "1e-8");
	restore(ui->edit_update_period, "1e6");
	restore(ui->edit_eps_u, "1e-8");
	settings.endGroup();

	settings.beginGroup("controls/params");
	restore(ui->edit_A_k, "1e9");
	restore(ui->edit_E_a, "4.2e6");
	restore(ui->edit_G_t, "0");
	restore(ui->edit_C_pt, "1464");
	restore(ui->edit_T_s0, "300");
	restore(ui->edit_T_s, "720");
	restore(ui->edit_T_max, "2372");
	restore(ui->edit_R_s, "250");
	restore(ui->edit_R_max, "363");
	restore(ui->edit_lambda, "0.23");
	restore(ui->edit_C_p, "1800");
	restore(ui->edit_p_k, "1e6");
	restore(ui->edit_q_r, "0");
	restore(ui->edit_rho_t, "1600");
	settings.endGroup();
}
