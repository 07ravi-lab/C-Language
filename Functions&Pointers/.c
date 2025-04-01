#include <stdio.h>

void newYearWishes(int count) {
    if (count == 0) {
        return ; 
    }
    printf("Happy New Year! 🎉 Thanks for being awesome! Wish #%d\n", count);
    newYearWishes(count + 1); 
}

int main() {
    int n;
    printf("Enter the number of wishes: ");
    scanf("%d", &n);
    newYearWishes(n); 
    return 0;
}