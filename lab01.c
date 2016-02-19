// Napisać
// program w C, który wczytuje liczbę naturalną i przekazuje systemowi
// operacyjnemu (przez return w main-ie) resztę z dzielenia tej liczby przez 3;
// skrypt bashowy, który uruchamia powyższy program,
// przechwytuje wartość przekazaną systemowi i drukuje ją.


#include <stdio.h>
int main()
{
  int a, b;
  printf("podaj liczbe: \n");
  scanf("%d", &a);
  b=a%3;
  printf("%d\n", b);
}
