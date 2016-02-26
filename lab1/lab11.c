#include <stdio.h>
void main(){
  int a;
  a=5&3;
  printf("%d\n", a);
a=5|3;
printf("%d\n", a);
a=7<<2&7;
printf("%d\n", a);
a=7<<(2&7);
printf("%d\n", a);
a=((-1)<<8)>>16;
printf("%d\n", a);
a=13^9;
printf("%d\n", a);
}
