#include<stdio.h>
    void greet () {
        printf("hello Ravi!\n");
        printf("how are you?\n");
        return ;
    }
int main () {
    for(int i=1;i<=5;i++){
          greet ();
    }
    return 0;
}