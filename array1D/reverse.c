#include <stdio.h>

void reverse(int arr[])
{
    int i = 0;
    int j = 7;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    reverse(arr);
    for (int i = 0; i <= 7; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}