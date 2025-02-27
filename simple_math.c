/** \file simple_math.c
    \brief definition of the funct
    \author Sara
 */

 #include "simple_math.h"

float mean(int a, int b) {
    return (a+b)/2;
 }

 int max (int a, int b) {
    if(a>b)
        return a;
    return b;
 }