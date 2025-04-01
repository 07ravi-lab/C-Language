#include<stdio.h>
int main (){
    int n; //n odd
    printf("Enter a number of row's:");
    scanf("%d",&n);
    //**** ****
    //***   ***
    //**     **
    //*       *
    int nsp=1;
    int nst=n;
    for(int q=1;q<=2*n+1;q++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<n;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        nsp +=2;
        nst --;
        printf("\n");
    }
    return 0;
}