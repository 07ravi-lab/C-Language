#include<stdio.h>
int main (){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("this is the three digit number",n);
    }
    else{
        printf("this is not three digit number",n);
    }
    return 0;
}