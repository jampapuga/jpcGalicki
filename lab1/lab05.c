// Zadanie 5:
//Co wydrukuje nast�puj�cy fragment programu?
//................
//int a, b;
//a=2; b=4;
//if ((a=2) & (b=4))   printf(" TAK\n");
//else   printf(" NIE\n");
//................
//
//Nale�y zwr�ci� uwag�, �e w warunku powy�szej instrukcji   if   wyst�puje koniunkcja bitowa   &   a nie koniunkcja logiczna   && . 


#include <stdio.h>
int main()
{
  int a, b;
  a=2; b=4;
  if ((a=2) & (b=4))   printf(" TAK\n");
  else   printf(" NIE\n");

return 0;
}
