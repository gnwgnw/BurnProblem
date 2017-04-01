//
// Created by tsv on 29.03.17.
//

#ifndef BURNPROBLEM_SOLVER_HPP
#define BURNPROBLEM_SOLVER_HPP

#include <burn_solver.hpp>

#include <QApplication>
#include <QThread>

class Solver : public QObject {
Q_OBJECT
public:
	Solver(QObject* parent = nullptr);

	~Solver();

public slots:

	void
	start();

	void
	work();

	void
	stop();

	void
	set_emit_period(size_t period);

public:
	BurnSolver* solver;

signals:

	void
	send_data(QVector<QPointF> data);

	void
	send_u(qreal u);

	void
	finished();

private:
	size_t emit_period;
	bool done;

	void
	send();
};


#endif //BURNPROBLEM_SOLVER_HPP
