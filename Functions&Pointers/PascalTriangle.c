#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int x) {
    int fact = 1;
    for (int i = 2; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}

// Function to calculate combination (nCr) using factorials
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to print Pascal's Triangle
void printPascalsTriangle(int n) {
    int nsp = n;  // Number of spaces before the first element in each row
    
    // Outer loop for each row of Pascal's Triangle
    for (int i = 0; i <= n; i++) {
        // Print leading spaces for centering the triangle
        for (int k = 0; k < nsp; k++) {
            printf(" ");
        }
        
        // Decrease the number of spaces after each row
        nsp--;
        
        // Print the combination values in the current row
        for (int j = 0; j <= i; j++) {
            int icj = combination(i, j);  // Calculate the combination for each element
            printf("%d ", icj);  // Print the combination followed by a space
        }
        
        // Move to the next line after each row
        printf("\n");
    }
}

int main() {
    int n;
    
    // Take input from the user for the number of rows
    printf("Enter n (number of rows): ");
    scanf("%d", &n);
    
    // Print the Pascal's Triangle
    printPascalsTriangle(n);
    
    return 0;
}
