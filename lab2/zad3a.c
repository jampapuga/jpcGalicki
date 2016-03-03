// Napisać program szyfrujący oraz współpracujący z nim program odszyfrowujący, działające w następujący sposób:
// wczytany tekst jest dzielony na grupy po 4 kolejne znaki; każda taka grupa szyfrowana jest oddzielnie;
// taką grupę traktuje się jak pojedynczą liczbę całkowitą; poddaje się ją jakiejś różnowartościowej funkcji matematycznej (,,kluczowi'' szyfru); np.
//  ! n → −n     albo
//  ! n → (n+k)%232   gdzie k jest ustaloną liczbą całkowitą;
// otrzymany ciąg liczb przesyła się adresatowi;
// każdą otrzymaną liczbę adresat odszyfrowuje funkcją odwrotną do klucza, a następnie rozbija na 4 znaki; te znaki drukuje.

#include <stdio.h>

#define znaki 4 // po ile znakow pakowane do jednej liczby
int key(int a){
    return -a;     // szyfruje liczbe
}
int paczka(int buf[znaki]){
  int i, pacz=0;    // pakuje caly bufor do jednej liczby
  for(i=0;i<znaki;i++)
    pacz=(pacz<<8)|(buf[i]&255);
  return pacz;
}
int main(){
  int buf[znaki];
  int i, ile=0;
  buf[ile]=(int)getchar();
  while(buf[ile]!=EOF){
    ile++;
    if(ile==znaki){
      printf("%i ", key(paczka(buf)));
      ile=0;
    }
    buf[ile]=(int)getchar();
  }
  if(ile>0){ // dopelnianie spacjami:
    for(i=ile;i<znaki;i++) buf[i]=' ';
    printf("%i ", key(paczka(buf)));
  }
  printf("\n");
  return 0;
}
