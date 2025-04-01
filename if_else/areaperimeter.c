#include<stdio.h>
int main (){
    int l;
    printf("Enter the length : ");
    scanf("%d",&l);

    int b;
    printf("Enter the breath : ");
    scanf("%d",&l);

    int a = l*b;
    int p = 2 * (l+b);

    if(a>b){
        printf("area is greater than perimeter",a);
    }
    else{
        printf("area is less than perimeter",p);
    }
    return 0;
}