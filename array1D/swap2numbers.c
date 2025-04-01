#include<stdio.h>
void fun (int a[]){
    int tem = a[0];
    a[0] = a[1];
    a[1] = tem;
    return ;
}
int main(){
    int arr[2] = {4,5};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
     printf("%d %d\n",arr[0],arr[1]);
    return 0;
}