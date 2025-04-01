#include<stdio.h>
int main (){
    int n;
    printf ("enter the number :");
    scanf( "%d" ,&n);
    int sum = 0 ;
    for (int i=1; i<=n; i++){
        if(i % 2 == 0) sum=sum + 1;
        else sum=sum-1;
    }
    printf("sum of series is  %d",sum);
    return 0;
}