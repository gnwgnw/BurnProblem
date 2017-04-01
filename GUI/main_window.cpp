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
	ui->lineEdit_u->setText(QString::number(u));
}

void
MainWindow::connect_slots()
{
	auto& s = solver->solver;

	connect_responding_field(ui->spinBox_n, qOverload<int>(&QSpinBox::valueChanged), s->get_n());
	connect_responding_field(ui->doubleSpinBox_h, qOverload<double>(&QDoubleSpinBox::valueChanged), s->get_h());

	connect_field(ui->doubleSpinBox_x_1, qOverload<double>(&QDoubleSpinBox::valueChanged), s->get_x_1());
	connect_field(ui->doubleSpinBox_t_end, qOverload<double>(&QDoubleSpinBox::valueChanged), s->get_t_end());
	connect_field(ui->doubleSpinBox_tau, qOverload<double>(&QDoubleSpinBox::valueChanged), s->get_tau());

	connect_field(ui->doubleSpinBox_A_k, qOverload<double>(&QDoubleSpinBox::valueChanged), s->params.A_k);
	connect_field(ui->doubleSpinBox_E_a, qOverload<double>(&QDoubleSpinBox::valueChanged), s->params.E_a);
	connect_field(ui->doubleSpinBox_G_t, qOverload<double>(&QDoubleSpinBox::valueChanged), s->params.G_t);
	connect_field(ui->doubleSpinBox_C_pt, qOverload<double>(&QDoubleSpinBox::valueChanged), s->params.C_pt);
	connect_field(ui->doubleSpinBox_T_s0, qOverload<double>(&QDoubleSpinBox::valueChanged), s->params.T_s0);
	connect_field(ui->doubleSpinBox_T_s, qOverload<double>(&QDoubleSpinBox::valueChanged), s->params.T_s);
	connect_field(ui->doubleSpinBox_T_max, qOverload<double>(&QDoubleSpinBox::valueChanged), s->params.T_max);
	connect_field(ui->doubleSpinBox_R_s, qOverload<double>(&QDoubleSpinBox::valueChanged), s->params.R_s);
	connect_field(ui->doubleSpinBox_R_max, qOverload<double>(&QDoubleSpinBox::valueChanged), s->params.R_max);
	connect_field(ui->doubleSpinBox_lambda, qOverload<double>(&QDoubleSpinBox::valueChanged), s->params.lambda);
	connect_field(ui->doubleSpinBox_C_p, qOverload<double>(&QDoubleSpinBox::valueChanged), s->params.C_p);
	connect_field(ui->doubleSpinBox_p_k, qOverload<double>(&QDoubleSpinBox::valueChanged), s->params.p_k);
	connect_field(ui->doubleSpinBox_q_r, qOverload<double>(&QDoubleSpinBox::valueChanged), s->params.q_r);
	connect_field(ui->doubleSpinBox_rho_t, qOverload<double>(&QDoubleSpinBox::valueChanged), s->params.rho_t);

	connect(ui->button_run, &QPushButton::released, this, &MainWindow::start);

	connect(solver, &Solver::send_data, this, &MainWindow::update_g_chart);
	connect(solver, &Solver::send_u, this, &MainWindow::update_u);
}

template<typename S, typename Func1, typename V1>
void
MainWindow::connect_field(S* sender, Func1 signal, V1& value)
{
	connect(sender, signal, this,
			[this, &value](double val) {
				value = val;
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
				sender->setValue(value);
			}
	);
}
