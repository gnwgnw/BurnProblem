//
// Created by tsv on 22.03.17.
//

#include <QtWidgets/QDoubleSpinBox>
#include "main_window.hpp"

MainWindow::MainWindow()
		: ui(new Ui::MainWindow)
		, solver(new Solver)
{
	ui->setupUi(this);
	connect_slots();

	solver->set_emit_period(100000);
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
MainWindow::connect_slots()
{
	auto& s = solver->solver;

	connect_responding_field(ui->edit_n, &QLineEdit::editingFinished, s->get_n());
	connect_responding_field(ui->edit_h, &QLineEdit::editingFinished, s->get_h());

	connect_field(ui->edit_x_1, &QLineEdit::editingFinished, s->get_x_1());
	connect_field(ui->edit_t_end, &QLineEdit::editingFinished, s->get_t_end());
	connect_field(ui->edit_tau, &QLineEdit::editingFinished, s->get_tau());

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

	connect(solver, &Solver::send_data, this, &MainWindow::update_g_chart);
	connect(solver, &Solver::send_u, this, &MainWindow::update_u);
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
