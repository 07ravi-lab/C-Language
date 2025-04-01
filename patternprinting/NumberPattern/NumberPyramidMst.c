#include<stdio.h>
int main (){
    int n; //n odd
    printf("Enter a number of row's:");
    scanf("%d",&n);
    //1234567
    //123 567
    //12   67
    //1     7
    int nsp=1;
    int nst=n;
    for(int j=1;j<=n*2+1;j++){
        printf("%d",j);
        }
        printf("\n");
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){
            printf("%d",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
            a++;
        }
        for(int j=1;j<=nst;j++){
            printf("%d",a);
            a++;
        }
        nsp +=2;
        nst --;
        printf("\n");
    }
     return 0;
}