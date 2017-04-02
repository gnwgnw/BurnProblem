//
// Created by tsv on 22.03.17.
//

#ifndef BURNPROBLEM_UI_MAIN_FORM_HPP
#define BURNPROBLEM_UI_MAIN_FORM_HPP

#include "ui_burn_problem.hpp"

#include <QtCharts/QtCharts>
#include <QtCharts/QChartView>
#include <QLineSeries>

class Ui_MainWindow : public Ui::PartialWindow {
public:
	QChart* g_chart;
	QLineSeries* g_series;

	void
	setupUi(QMainWindow* MainWindow)
	{
		Ui::PartialWindow::setupUi(MainWindow);

		g_chart = new QChart();
		g_series = new QLineSeries();
		g_chart->addSeries(g_series);
		g_chart->legend()->hide();
		g_chart->createDefaultAxes();
		g_chart->axisX()->setRange(0, 0.0005);
		g_chart->axisY()->setRange(0, 1);

		QChartView* chart_view = new QChartView(g_chart);
		chart_view->setRenderHint(QPainter::Antialiasing);
		chart_view->setRubberBand(QChartView::HorizontalRubberBand);
		charts_layout->addWidget(chart_view, 0, 0);

		set_validators();
		edit_u->setReadOnly(true);
	}

	void
	set_validators()
	{
		edit_n->setValidator(new QIntValidator(2, 65535));
		edit_x_1->setValidator(new QDoubleValidator(1e-12, 1.0, 12));
		edit_h->setValidator(new QDoubleValidator(1e-12, 1.0, 12));
		edit_t_end->setValidator(new QDoubleValidator(0.0, 100.0, 2));
		edit_tau->setValidator(new QDoubleValidator(1e-12, 1.0, 12));

		edit_A_k->setValidator(new QDoubleValidator(-1e20, 1e20, 20));
		edit_E_a->setValidator(new QDoubleValidator(-1e20, 1e20, 20));
		edit_G_t->setValidator(new QDoubleValidator(-1e20, 1e20, 20));
		edit_C_pt->setValidator(new QDoubleValidator(0, 1e4, 2));
		edit_T_s0->setValidator(new QDoubleValidator(0, 1e4, 2));
		edit_T_s->setValidator(new QDoubleValidator(0, 1e4, 2));
		edit_T_max->setValidator(new QDoubleValidator(0, 1e4, 2));
		edit_R_s->setValidator(new QDoubleValidator(0, 1e4, 2));
		edit_R_max->setValidator(new QDoubleValidator(0, 1e4, 2));
		edit_lambda->setValidator(new QDoubleValidator(0, 1e3, 6));
		edit_C_p->setValidator(new QDoubleValidator(0, 1e4, 2));
		edit_p_k->setValidator(new QDoubleValidator(0, 1e20, 0));
		edit_q_r->setValidator(new QDoubleValidator(-1e20, 1e20, 6));
		edit_rho_t->setValidator(new QDoubleValidator(0, 1e4, 2));
	}
};

namespace Ui {
	class MainWindow : public Ui_MainWindow {};
}

#endif //BURNPROBLEM_UI_MAIN_FORM_HPP
