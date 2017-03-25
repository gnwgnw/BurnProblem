//
// Created by tsv on 05.03.17.
//

#ifndef BURNPROBLEM_COERCEDPARAMS_CUH
#define BURNPROBLEM_COERCEDPARAMS_CUH

#ifndef __CUDACC__
#define __host__
#define __device__
#endif

struct CoercedParams {
	float A;
	float B;
	float C;
	float D;
	float E;
	float P;
	float Q;

	float A_rt;
	float B_rt;
	float C_rt;

	__host__ __device__
	float
	RT(float g)
	{
		return A_rt + B_rt * g + C_rt * g * g;
	};
};

#endif //BURNPROBLEM_COERCEDPARAMS_CUH
