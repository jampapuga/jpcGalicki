#include <stdio.h>

void divide(int n, int k, int *q, int*r){
	*q=n/k;
	*r=n%k;
	}
void main(){
	int a,b,iloraz, reszta;
	printf("podaj dwie liczby które chcesz podziielić:\n");
	scanf("%d %d", &a, &b);
	divide(a,b,&iloraz, &reszta);
	printf("Iloraz %d Reszta %d \n", iloraz, reszta );
}
