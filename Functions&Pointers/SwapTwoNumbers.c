#include<stdio.h>
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    return;
}
int main (){
    int a ;
    printf("Emter the 1st number :");
    scanf("%d",&a);

    int b ;
    printf("Emter the 2nd number :");
    scanf("%d",&b);

    swap(a,b);

    printf("the value of a is %d\n",a);
    printf("the value of a is %d",b);
    return 0;
}