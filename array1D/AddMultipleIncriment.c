#include<stdio.h>
int main (){
    int arr[8] = {2,4,6,8,10,12,14,16};
    for (int i=0; i<=7; i++){
        if(i%2 !=0) arr[i] *=2;
        else arr[i] +=10;
    }
    for (int i=0; i<=7; i++){
         printf("%d ",arr[i]);
    } 
    return 0;
}