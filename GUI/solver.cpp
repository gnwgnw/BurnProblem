//
// Created by tsv on 29.03.17.
//

#include <QtCore/QVector>
#include "solver.hpp"

int meta_type = qRegisterMetaType<QVector<QPointF>>("QVector<QPointF>");

Solver::Solver(QObject* parent)
		: QObject(parent)
		, emit_period(1000000)
		, done(false)
		, solver(new BurnSolver)
{
}

Solver::~Solver()
{
	delete solver;
}

void
Solver::start()
{
	QThread* thread = new QThread;
	moveToThread(thread);

	connect(thread, &QThread::started, this, &Solver::work);
	connect(this, &Solver::finished, thread, &QThread::quit);
	connect(thread, &QThread::finished, thread, &QThread::deleteLater);

	thread->start();
}

void
Solver::work()
{
	size_t i = 0;
	while (!done) {
		solver->step();

		++i;
		if (i > emit_period) {
			send();
			i = 0;
		}
		QApplication::processEvents();
	}

	send();
	done = false;
	moveToThread(QApplication::instance()->thread());
	emit finished();
}

void
Solver::stop()
{
	done = true;
}

void
Solver::set_emit_period(size_t period)
{
	emit_period = period;
}

void
Solver::send()
{
	QVector<QPointF> data;

	size_t n = solver->get_n();
	for (auto i = 0; i < n; ++i) {
		float x = solver->get_x()[i];
		float y = solver->get_y()[i];
		data.append(QPointF(x, y));
	}

	emit send_data(data);
}
