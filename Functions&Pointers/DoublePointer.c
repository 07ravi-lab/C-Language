#include<stdio.h>
int main (){
    int a = 25;
    int* x = &a; //int*x -> int ka address store krta hai
    //VVIP -> *x = 7; a is changed
    int** y = &x; //int ** -> int*x ka address store krta hai
    int*** z = &y;
    printf("%p\n",&x);
    printf("%d\n",a);
    printf("%d\n",x);
    printf("%d\n",**y);
    printf("%d\n",***z);
    return 0;
}