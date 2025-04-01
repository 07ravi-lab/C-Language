#include<stdio.h>
int main (){
    int a[2][2]={1,2,3,4};
    int b[2][2]={5,6,7,8};
    int res[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res[i][j] = a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}