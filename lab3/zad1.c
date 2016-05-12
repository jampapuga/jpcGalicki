/* Napisać program, który bada poznane typy liczbowe w C; t.zn. ustala

    ilość bajtów, przeznaczonych na zmienną (operator sizeof),
    największą i najmniejszą wartość liczby,
    ,,ziarno'', czyli najmniejszą taką liczbę x, że 1.0+x≠1.0 ,
    ,,precyzję'', czyli maksymalną liczbę cyfr dziesiętnych po kropce

dla następujących typów: */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
   printf("             Dolna wartość          Górna wartość          Ziarno        Precyzja       we/wy\n");
   printf("short       %22d %22d                                 %%i\n",(short) SHRT_MIN,(short) SHRT_MAX);
   printf("int         %22d %22d                                 %%i\n",(int) SHRT_MIN,(int) INT_MAX);
   printf("long        %22ld %22ld                                 %%li\n",(long) LONG_MIN,(long) LONG_MAX);
   printf("long long   %22lld %22lld                                 %%lli\n", (long long)LLONG_MIN, (long long)LLONG_MAX);
   printf("float       %22e %22e %14e %10d  %%f lub %%e\n",(float) FLT_MIN,(float) FLT_MAX,(float) FLT_EPSILON,(int) FLT_DIG);
   printf("double      %22le %22le %14le %10d  %%lf lub %%le\n", (double)DBL_MIN,(double) DBL_MAX, (double)DBL_EPSILON, (int)DBL_DIG);
   printf("double long %22LE %22Le %14Le %10d  %%Lf lub %%Le\n",(long double) LDBL_MIN, (long double)LDBL_MAX, (long double)LDBL_EPSILON,(int)DBL_DIG);

return 0;
}
