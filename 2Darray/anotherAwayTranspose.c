#include <stdio.h>
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
    int brr[c][r];
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            brr[i][j] = arr[j][i];
        }
    }
    printf("Transpose of matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ",brr[i][j]);
        }
       printf("\n");
    }
    return 0;
}
