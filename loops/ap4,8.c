#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a = 1;
        printf("%d ",a);
        a = a*2;
    }
    return 0;
}