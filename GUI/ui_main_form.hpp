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

	void
	setupUi(QMainWindow* MainWindow)
	{
		Ui::PartialWindow::setupUi(MainWindow);

		g_chart = new QChart();
		g_chart->addSeries(new QLineSeries());
		g_chart->legend()->hide();
		g_chart->createDefaultAxes();
		g_chart->axisX()->setRange(0, 1);
		g_chart->axisY()->setRange(0, 1);

		QChartView* chart_view = new QChartView(g_chart);
		charts_layout->addWidget(chart_view, 0, 0);
	}
};

namespace Ui {
	class MainWindow : public Ui_MainWindow {};
}

#endif //BURNPROBLEM_UI_MAIN_FORM_HPP
