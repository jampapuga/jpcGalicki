#include <stdio.h>
#include <string.h>

void swap(char* str, int i, int j){
    char t = str[i];
    str[i] = str[j];
    str[j] = t;
}

void reverse_string(char* str, int length){
    for(int i=0; i<length/2; i++){
        swap(str, i, length-i-1);
    }
}
void reverse_words(char* str){
    int l = strlen(str);
    //Odwróć stringa
    reverse_string(str,strlen(str));
    int p=0;
    //Znajduje odstepy i odwraca kazde slowo
    for(int i=0; i<l; i++){
        if(str[i] == ' '){
            reverse_string(&str[p], i-p);
            p=i+1;
        }
    }
    //Odwraca ostatnie slowo
    reverse_string(&str[p], l-p);
}
int main(){
char s[] = "Ona miala suknie kolorowa";
reverse_words(s);
printf("%s", s);
return 0;
}
