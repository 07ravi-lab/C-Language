

#include<stdio.h>
#include<string.h>
int main (){
    char str[20]="Ravi Raj\n";
    printf("%s",str);
    for(int i=7;i<=2;i--){
        str[i+1] = str[i];
    }
    str[2]='b';
    printf("%s",str);
    return 0;
}