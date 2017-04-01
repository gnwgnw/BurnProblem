//
// Created by tsv on 05.03.17.
//

#ifndef BURNPROBLEM_PARAMS_HPP
#define BURNPROBLEM_PARAMS_HPP

#include "coerced_params.cuh"

struct Params {
	float A_k;
	float E_a;
	float G_t;
	float C_pt;
	float T_s0;
	float T_s;
	float T_max;
	float R_s;
	float R_max;
	float lambda;
	float C_p;
	float p_k;
	float q_r;
	float rho_t;

	CoercedParams
	coerced_params();

	double
	u(double dg0);

private:
	float
	A();

	float
	B();

	float
	C();

	float
	D();

	float
	E();

	float
	P();

	float
	Q();

	float
	A_rt();

	float
	B_rt();

	float
	C_rt();
};

#endif //BURNPROBLEM_PARAMS_HPP
