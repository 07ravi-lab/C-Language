#include<stdio.h>
int main(){
    int r;
    printf("enter the number of rows");
    scanf("%d",&r);
    int c;
    printf("enter the number of colums");
    scanf("%d",&c);
    printf("enter total number of elements\n");
    int arr[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    int max = arr[0][0];
    int min = arr[0][0];
    for (int i =0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
            if(min>arr[i][j]){
                min = arr[i][j];
            }
        }
    }
    printf("\nmaximum number of 2D arrayes is %d\n",max);
    printf("\nminimum number of 2D arrayes is %d",min);

    return 0;
}
