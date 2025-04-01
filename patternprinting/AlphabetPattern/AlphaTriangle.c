#include<stdio.h>
int main (){
    int n;
    printf("Enter the no. of Row's :");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){  
        int a=i-1;
        for(int k=1;k<=nsp;k++){ //spacee
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=i;j++){ //number triangle
            char ch = (char)(j+64);
            printf("%c",ch);
        }
        for(int q=1;q<=i-1;q++){ //extra cheeze
            char ch = (char)(q+64);
            printf("%c",ch);
            a--;
        }
        printf("\n");
    }
    return 0;
}