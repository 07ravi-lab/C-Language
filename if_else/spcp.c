#include<stdio.h>
int main(){
    int sp;
    printf("Enter seling price ");
    scanf("%d", &sp);
    int cp;
    printf("Enter cost price ");
    scanf("%d", &cp);
    if(sp>cp){
        printf("profit is : %d",sp);
    }
    else{
        printf("loss is : %d",cp);
    }
    return 0;
}