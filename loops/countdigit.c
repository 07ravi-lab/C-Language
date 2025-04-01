#include<stdio.h>
int main (){
    int n ;
    printf("enter the number :");
    scanf("%d",&n);
    int count = 0;
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("the number of digit is :%d",count);
    return 0;
}