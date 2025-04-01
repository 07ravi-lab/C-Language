#include<stdio.h>
int main (){
    int sum=0,num,digit;
    printf("enter the number :");
    scanf("%d",&num);

    while(num != 0){
        digit=digit%10;
        if(digit%2==0){
            sum=sum+digit;
        }
        num = num/10;
    }
        printf("sum of even digit of given number is :%d\n",num);
        return 0;
}