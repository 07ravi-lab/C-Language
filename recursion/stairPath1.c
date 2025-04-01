#include<stdio.h>
int stair(int n){
    if(n<=3) return n;
    return stair(n-1) + stair(n-2) + stair(n-3);
}
int main (){
    int n;
    printf("Entern the number :");
    scanf("%d",&n);
    printf("%d",stair(n));
    return 0;
}