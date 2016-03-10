/* Napisać program, który bada poznane typy liczbowe w C; t.zn. ustala

    ilość bajtów, przeznaczonych na zmienną (operator sizeof),
    największą i najmniejszą wartość liczby,
    ,,ziarno'', czyli najmniejszą taką liczbę x, że 1.0+x≠1.0 ,
    ,,precyzję'', czyli maksymalną liczbę cyfr dziesiętnych po kropce

dla następujących typów: */

#include <stdio.h>
#include <limits.h>
#include <float.h>

void main(){
   printf("             Dolna wartość          Górna wartość          Ziarno        Precyzja       we/wy\n");
   printf("short       %22d %22d                                 %%i\n", SHRT_MIN, SHRT_MAX);
   printf("int         %22d %22d                                 %%i\n", SHRT_MIN, INT_MAX);
   printf("long        %22ld %22ld                                 %%li\n", LONG_MIN, LONG_MAX);
   printf("long long   %22lld %22lld                                 %%lli\n", LLONG_MIN, LLONG_MAX);
   printf("float       %22e %22e %14e %14e  %%f lub %%e\n", FLT_MIN, FLT_MAX, FLT_EPSILON, FLT_DIG);
   printf("double      %22le %22le %14le %14le  %%lf lub %%le\n", DBL_MIN, DBL_MAX, DBL_EPSILON), DBL_DIG;
   printf("double long %22LE %22Le %14Le %14Le  %%Lf lub %%Le\n", LDBL_MIN, LDBL_MAX, LDBL_EPSILON,DBL_DIG);
}
