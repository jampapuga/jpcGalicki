#include <stdio.h>
int heh()
{
int a, b, c, d;
a=b=c=d=0;
printf("%d %d %d %d\n",a,b,c,d);
return 0;
}
int lol()
{
int i;
int N=5;
int a[N];
for (i=0; i<N; a[i++]=i){
printf("%d\n",a[i]);
}
return;
}
main(){
heh();
lol();
}
