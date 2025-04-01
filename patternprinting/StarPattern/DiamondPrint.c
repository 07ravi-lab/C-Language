#include<stdio.h>
int main (){
    int n; //n odd
    printf("Enter a number of row's:");
    scanf("%d",&n);

    int nsp=n-1;
    int nst=1;
    int ml = n/2 + 1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){ //space
            printf(" ");
        }
        for(int k=1;k<=nst;k++){ //star
            printf("*");
        }
        if(i<ml){  //for diamond use condition
            nsp--;
            nst +=2;
        }
        else{
            nsp++;
            nst -=2;
        }
        printf("\n");
    }
    return 0;
}