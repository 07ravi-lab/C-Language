#include<stdio.h>
int main (){
    int n ;
    printf("ener the rows's");
    scanf("%d",&n);

    int m ;
    printf("ener the column's");
    scanf("%d",&m);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==m){
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
