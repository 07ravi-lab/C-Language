#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return 1;
    return n+sum(n-1);
}
int main (){
    int n;
    printf("ENter the number");
    scanf("%d",&n);
    int fact=sum(n);
    printf("%d",fact);
    return 0;
}