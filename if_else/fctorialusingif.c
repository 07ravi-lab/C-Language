#include <stdio.h>
int main() {
    int number;
    long long factorial = 1; // Use long long for large factorials

    // Prompt the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        if (number == 0) {
            factorial = 1; // 0! is 1
        } else {
            for (int i = 1; i <= number; ++i) {
                factorial *= i;
            }
        }
        printf("Factorial of %d is = %lld\n", number, factorial);
    }

    return 0;
}

