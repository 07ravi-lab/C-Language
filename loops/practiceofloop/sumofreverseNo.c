#include<stdio.h>
int main (){
    int n,sum=0,r=0;
    printf("enter the number :");
    scanf("%d",&n);
    int original = n;
    while(n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    sum=original+r;
    printf("reverse digit number is :%d\n",r);
    printf("sum of original number and all reverse digit number is :%d",sum);
    return 0 ;
}