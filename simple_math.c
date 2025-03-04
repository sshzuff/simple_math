/** \file simple_math.c
    \brief definition of the funct
    \author Sara
 */

 #include "simple_math.h"

 //per le regole del c stiamo facendo numero intero fratto numero intero
float mean(int a, int b) {

    return (a+b)/2.0;
 }

 int max(int a, int b) {
    if(a>b){
        return a;
    }
    else {
        return b;
    }
 }

 cx_float_t cx_mean(cx_int_t a, cx_int_t b){
    
    cx_float_t average;
    
    average.re = mean (a.re, b.re);
    average.imm = mean(a.imm, b.imm);
    
    return average;
 }
