#include <stdio.h>
#include<limits.h>
int main() {
    int a[2][2] = {1, 2, 3, 4};
    int b[2][2] = {5, 6, 7, 8};
    int arr[2][2];
    int max = INT_MIN; // Initialize max to the smallest possible integer

    // Combine matrices a and b into arr and find the maximum value
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            arr[i][j] = a[i][j] + b[i][j]; // Combine values from a and b
            if (max < arr[i][j]) {
                max = arr[i][j]; // Update max if a larger value is found
            }
        }
    }

    // Print the maximum value in all positions of the resulting matrix
    printf("Matrix with maximum value in all positions:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", max);
        }
        printf("\n");
    }

    return 0;
}
