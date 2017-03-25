//
// Created by tsv on 05.03.17.
//

#include "params.hpp"

CoercedParams
Params::coerced_params()
{
	return {
			A(), B(), C(), D(), E(), P(), Q(), A_rt(), B_rt(), C_rt()
	};
}

float
Params::u(float dg0)
{
	return -(B() * dg0 + Q()) / (C() * rho_t);
}

float
Params::A()
{
	return A_k;
}

float
Params::B()
{
	return lambda * (T_max - T_s);
}

float
Params::C()
{
	return G_t + C_pt * (T_s - T_s0);
}

float
Params::D()
{
	return lambda / C_p;
}

float
Params::E()
{
	return -E_a;
}

float
Params::P()
{
	return p_k;
}

float
Params::Q()
{
	return q_r;
}

float
Params::A_rt()
{
	return R_s * T_s;
}

float
Params::B_rt()
{
	return R_s * T_max - 2.f * R_s * T_s + R_max * T_s;
}

float
Params::C_rt()
{
	return (T_max - T_s) * (R_max - R_s);
}
