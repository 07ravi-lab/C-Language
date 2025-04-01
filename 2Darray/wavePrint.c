#include <stdio.h>
int main() {
    int m, n;

    // Input rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int a[m][n];

    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Wave print
    printf("Wave print of the matrix:\n");
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            // Left to right for even rows
            for (int j = 0; j < n; j++) {
                printf("%d ", a[i][j]);
            }
        } else {
            // Right to left for odd rows
            for (int j = n - 1; j >= 0; j--) {
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}
