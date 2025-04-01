#include <stdio.h>
int main()
{
    // 1st matrix
    int m;
    printf("enter the number of 1st rows");
    scanf("%d", &m);
    int n;
    printf("enter the number of 1st columns");
    scanf("%d", &n);
    printf("Eter the elements of matrix :\n");
    int a[m][n];
    // input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // 2nd matrix
    int p;
    printf("enter the number of 2nd rows");
    scanf("%d", &p);
    int q;
    printf("enter the number of 2nd columns");
    scanf("%d", &q);
    printf("Eter the elements of matrix :\n");
    int b[p][q];
    // input
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if (n != p)
    {
        printf("Multiple matrix is not possible");
    }
    else
    {
        // multiplication
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                // 1st rows of a & 2nd column b
                for (int k = 0; k < n; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("resultants matrix is :\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}