#include<stdio.h>
int main (){
    int arr[5] = {1,2,3,4,5};
    int x = 4; 
    for(int i=0;i<4;i++){
        if(arr[i]==x){
            printf("%d numbers of index is %d",x,i);
            break;
        }
    }
    return 0;
}