#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Ask the user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display the Fibonacci series up to n terms
    printf("Fibonacci Series: ");

    // If the number of terms is 0 or negative
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        printf("%d\n", first);
    } else {
        // Print the first two terms of the Fibonacci sequence
        printf("%d %d ", first, second);

        // Generate the next terms of the Fibonacci sequence
        for (int i = 3; i <= n; i++) {
            next = first + second;
            printf("%d ", next);

            // Update the first and second terms
            first = second;
            second = next;
        }
        printf("\n");
    }

    return 0;
}
