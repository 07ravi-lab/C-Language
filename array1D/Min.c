#include<stdio.h>
#include<limits.h>
int main (){
    int arr[5] = {1,4,7,9,3};
    int Min = INT_MAX;

    for(int i=0; i<=5; i++){
        if(Min>arr[i]){
            Min = arr[i];
        }
    }
    printf("%d",Min);
    return 0;
}