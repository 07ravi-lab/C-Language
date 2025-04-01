#include<stdio.h>
int main (){
    char str[10]="Hello";
    str[2] =98;
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}
