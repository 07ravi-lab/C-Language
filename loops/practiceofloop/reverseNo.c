#include<stdio.h>
int main (){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int r = 0;
    while (n>0){
        // r = r+(n%10);
        r = r*10;
        r = r+(n%10);
        // r = r*10; //use this line same as above
        n = n/10;
    }
    // r = r/10;
    printf("the reverse the number is :%d\n",r);
    return 0;
}