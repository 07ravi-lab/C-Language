#include<stdio.h>
#include<string.h>
int main (){
    char s1[20] = "College";
    char s2[] = "wallah"; 
    strcat(s1,s2);
    printf("%s",s1);
    return 0;
}