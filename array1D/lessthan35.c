#include<stdio.h>
int main (){
    int marks[10] = {22,55,77,88,99,33,56,78,34,56};

    for(int i=0;i<=9;i++) {
        if(marks[i]<35) {
            printf("%d ",marks[i]);
        }
    }
    return 0;
}