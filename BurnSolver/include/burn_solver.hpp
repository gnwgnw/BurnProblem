//
// Created by tsv on 01.03.17.
//

#ifndef BURNPROBLEM_BURN_SOLVER_HPP
#define BURNPROBLEM_BURN_SOLVER_HPP

#include "params.hpp"
#include "cuda_solver.hpp"

class BurnSolver : public CudaSolver {
public:
	Params params;
private:
	void
	next_step() override;
};

#endif //BURNPROBLEM_BURN_SOLVER_HPP
