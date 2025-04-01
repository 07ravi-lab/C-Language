#include<stdio.h>
void fun(int a[]){
    a[0] = 10;
    return ;
}
int main (){
    int arr[5] = {1,2,3,4,5};
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d\n",arr[0]);
    return 0;
}