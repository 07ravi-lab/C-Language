#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 5, 2, 1};
    int brr[8];

    for(int i=0;i<=7;i++){
        brr[i] = arr[7-i];
    }

    for(int i=0;i<=7;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}