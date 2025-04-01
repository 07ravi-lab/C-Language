#include<stdio.h>
int main (){
    int n ;
    printf("ener the rows's");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int q=n/2 + 1;
            if(j==q || i==q){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}