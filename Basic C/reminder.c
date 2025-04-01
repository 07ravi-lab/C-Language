#include<stdio.h>
int main(){
    int a,b; //a>b
    printf("enter dividend :");
    scanf("%d", &a);

    printf("enter divisor :");
    scanf("%d", &b);

    int q = a/b;
    int r = a - (b*q); //divident*quetion+reminder=divisor

    printf("The the remainder is : %d is Divided by : %d is : =%d",a,b,r);
    return 0;

}