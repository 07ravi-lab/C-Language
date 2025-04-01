#include<stdio.h>
int main (){
    int arr[2] = {4,5};
    int product = 1;

for(int i=0; i<=1; i++){
    product = product * arr[i];
}
printf("%d",product);
    return 0;
}