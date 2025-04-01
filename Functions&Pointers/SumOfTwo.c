#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main (){
    int a;
    printf("enter first number :");
    scanf("%d",&a);
    int b;
    printf("enter second number :");
    scanf("%d",&b);

    int sum = add(a,b);

    printf("sum of thwo numbers is :%d",sum);

    return 0;
}
