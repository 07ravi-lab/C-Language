#include<stdio.h>
#include<string.h>
int main (){
    char s1[20] = "College Wallah";
    char s2[20]; 
    strcpy(s2,s1);
    s2[0]="M";
    printf("%s",s2);
    return 0;
}