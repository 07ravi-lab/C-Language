#include<stdio.h>
int main (){
    int a;
    printf("Enter the 1st side : ");
    scanf("%d",&a);

    int b;
    printf("Enter the 2nd side : ");
    scanf("%d",&b);

    int c;
    printf("Enter the 3rd side : ");
    scanf("%d",&c);

    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("this is the valide triangle");
    }
    else{
        printf("invilade");
    }
    return 0;
}