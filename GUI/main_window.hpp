//
// Created by tsv on 22.03.17.
//

#ifndef BURNPROBLEM_MAIN_WINDOW_HPP
#define BURNPROBLEM_MAIN_WINDOW_HPP

#include "ui_main_form.hpp"
#include "burn_solver.hpp"
#include "solver.hpp"

#include <QMainWindow>

class MainWindow : public QMainWindow {
Q_OBJECT

public:
	explicit MainWindow();

	virtual ~MainWindow();

public slots:

	void
	start();

	void
	stop();

	void
	update_g_chart(QVector<QPointF> points);

	void
	update_u(qreal u);

protected:
	void
	closeEvent(QCloseEvent* event) override;

private:
	Ui::MainWindow* ui;
	Solver* solver;

	void
	connect_slots();

	template<typename S, typename Func1, typename V1>
	void
	connect_field(S* sender, Func1 signal, V1& value);

	template<typename S, typename Func1, typename V1>
	void
	connect_responding_field(S* sender, Func1 signal, V1& value);

	void
	write_settings();

	void
	read_settings();
};

#endif //BURNPROBLEM_MAIN_WINDOW_HPP
