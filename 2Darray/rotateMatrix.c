#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows");
    scanf("%d",&n);
    printf("enter the number of columns");
    scanf("%d",&n);
    printf("Eter the elements of matrix :\n");
    int arr[n][n];
    //input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    //transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    //rotate
    for(int i=0;i<n;i++){
        int j=0;
        int k = n-1;
        while(j<k){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    //output
    printf("Rotates matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}