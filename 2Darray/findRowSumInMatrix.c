#include <stdio.h>
#include <limits.h>

int main() {
    int r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int arr[r][c];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate and print the sum of each row
    printf("Sum of each row:\n");
    for (int i = 0; i < r; i++) {
        int rowSum = 0;
        for (int j = 0; j < c; j++) {
            rowSum += arr[i][j];
        }
        printf("Row %d: %d\n", i + 1, rowSum);
    }
    return 0;
}
