#include<stdio.h>
int main (){
    int n;
    printf("Enter a number of row's:");
    scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
           
        }
        int a=1;
    for(int j=1;j<=nst;j++){
        int d=a+64;
        char ch=(char)d;
        printf("%c",ch);
        a++;
    }
     nsp--;
    nst=nst+2;
    printf("\n");
    }
    return 0;
}