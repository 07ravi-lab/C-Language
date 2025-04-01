#include<stdio.h>
int main (){
    int arr[8] = {2,4,6,8,10,12,14,16};
    int x = 4;
    int count = 0;
    for (int i=0; i<=7; i++){
       if(arr[i]>x){
        printf("%d ",arr[i]);
        count ++;
       }

    }
         printf("total elemnt is greater than %d is %d\n ",x,count);
    return 0;
}