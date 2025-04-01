#include<stdio.h>
int main (){
    int a = 5;
    int* x = &a;

    printf("%p\n",x);
    printf("%p",&a);
    return 0;
}