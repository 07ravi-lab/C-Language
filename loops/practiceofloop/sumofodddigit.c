#include<stdio.h>
int main (){
    int num,sum,digit;
    printf("enter the number");
    scanf("%d",&num);
    sum=0;
    while(num!=0){
        if(digit%2!=0){
            sum=sum+digit;
        }
        num = num/10;
    }
    printf("sum of even digit number is :%d",sum);
    return 0;
}