#include<stdio.h>
#include<limits.h>
int main (){
    int arr[5] = {1,4,7,9,3};
    int Max = INT_MIN;

    for(int i=0; i<=5; i++){
        if(Max<arr[i]){
            Max = arr[i];
        }
    }
    printf("%d",Max);
    return 0;
}