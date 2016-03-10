// W każdym typie liczbowym znaleźć możliwie małe dane,
// na których wynik jakiegoś działania matematycznego jest już niepoprawny.

#include <stdio.h>
int main()
{
  short a;
  printf("short: %i\n", a=555555+444444);
  int b;
  printf("int: %i\n", b=40000000000+40000000000);
long c;
printf("long: %li\n", c=22222222222222222+222222222222222);
long long d;
printf("long long: %lli\n", d=12345678900000000+98765432100000000);
float e;
printf("float: %f\n", e=0.00000005/2.0);
double f;
printf("double: %lf\n", f=0.00000000003/5.0);
long double g;
printf("long double: %Lf\n", g=0.0000000000000000452/2.0);
}
