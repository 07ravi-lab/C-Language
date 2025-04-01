#include<stdio.h>
int main (){
    int n ;
    printf("Emter the number :");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        int first=1;
        for(int j=0;j<=i;j++){
            printf("%d",first);
            first=first*(i-j)/(i+1);
        }
        printf("\n");
    }
    return 0;
}