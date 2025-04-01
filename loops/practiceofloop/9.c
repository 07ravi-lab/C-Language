#include<stdio.h>
int main (){
    int n ;
    printf("enter thr number :");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0)printf("the given number is prime number :%d",n);
    else printf("composite number is %d",n);
    return 0;
}