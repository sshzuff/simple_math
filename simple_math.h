/** \file simple_math.h
    \brief a toy example of math library
    \author Sara 
*/

#ifndef _SIMPLEMATH_
#define _SIMPLEMATH_

float mean (int a, int b);
int max(int a , int b);

typedef struct complex_int{
    int re;
    int imm;
} cx_int_t;

typedef struct complex_float {
    float re;
    float imm;
} cx_float_t;

cx_float_t cx_mean(cx_int_t a, cx_int_t b);
#endif 