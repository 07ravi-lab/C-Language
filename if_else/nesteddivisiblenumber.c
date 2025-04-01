#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",n);

    if(n%5==0){
        if(n%3==0){
            printf("this is the divisible by 5 and 3 : ");
        }
    }
    else{
        printf("this is not divisible by 5 and 3 : ");
    }
    return 0;
}