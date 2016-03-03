// Napisać program szyfrujący oraz współpracujący z nim program odszyfrowujący, działające w następujący sposób:
// wczytany tekst jest dzielony na grupy po 4 kolejne znaki; każda taka grupa szyfrowana jest oddzielnie;
// taką grupę traktuje się jak pojedynczą liczbę całkowitą; poddaje się ją jakiejś różnowartościowej funkcji matematycznej (,,kluczowi'' szyfru); np.
//  ! n → −n     albo
//  ! n → (n+k)%232   gdzie k jest ustaloną liczbą całkowitą;
// otrzymany ciąg liczb przesyła się adresatowi;
// każdą otrzymaną liczbę adresat odszyfrowuje funkcją odwrotną do klucza, a następnie rozbija na 4 znaki; te znaki drukuje.

#include <stdio.h>

#define znaki 4
int key_ret(int a){
    return -a;   // po ile znakow pakowane do jednej liczby
}
void print_paczka(int n){
  int i;     // wydruk wszystkich znakow z paczki
  int buf[znaki];
  for(i=0;i<znaki;i++){
    buf[i] = n%255;
    n >>=8;
  }
  for (i=znaki-1; i>=0; i--)
   printf("%c", (char)buf[i]);
}
int main(){
  int n, read;
  read = scanf("%i", &n);
  while (read == 1){
    print_paczka(key_ret(n));
    read = scanf("%i", &n);
  }
  printf("\n");
  return 0;
}
