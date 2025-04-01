#include <stdio.h>
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 2};
    for (int i = 0; i <= 5; i++)
    {
        for (int j = i+1; j <= 5; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d is the duplicate element", arr[i]);
                break;
            }
        }
    }
    return 0;
}