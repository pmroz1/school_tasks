#pragma once
#ifndef ML_CORE_
/**
 * \brief definition of  'myLib' header core
 */
#define ML_CORE 1  // NOLINT

#ifdef __cplusplus
extern "C" {
#endif

#define ML_DEFINE_HANDLE(object) typedef struct object##_T* object;

#define ML_HEADER_VERSION 0.0.1

#include<cstdint>

	typedef uint16_t int16;
	typedef uint32_t lint;
	typedef uint64_t bint;
	typedef signed int s_iint;
	typedef short int SHint;

	ML_DEFINE_HANDLE(ml_function);

	typedef enum result
	{
		r_success = 0,
		r_not_ready = 1,
		r_timeout = 2,
		r_exit = 3,
		r_forced_exit = 4,
		r_time_out = 5,
		r_incomplete = 6,
		r_initialization_failed = 7,
		r_wrong_data = 8,
		r_cant_open_file = 9,
		r_other = 10,
	} result;

	typedef enum error
	{
		e_wrong_data_type = 0,
		e_no_data = 1,
		e_crash = 2,
		e_cant_find_connection = 3,
	} error;

#ifdef __cplusplus
}
#endif

#endif
