#include<stdio.h>
int main(){
    int n;
    printf("Enter a no. of rows");
    scanf("%d",&n);
    int m;
    printf("Enter a no. of colloms");
    scanf("%d",&m);

    for(int i=1;i<=n;i++){ //no of lines(outrt loop)
        for(int i =1;i<=m;i++){ // no of collumns(inner loop) , no of star in each 
            printf("*");
        }
        printf("\n"); // har line ke bad ek enter marne ke liye
    }        
    return 0;
}