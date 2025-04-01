#include <stdio.h>

int main()
{
    char *week[7] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};
    int num;

    printf("Enter a week number (1-7) ");
    scanf("%d", &num);

    if (num >= 1 && num <= 7)
    {
        printf("The day of week : %s\n", week[num - 1]);
    }
    else
    {
        printf("Invalid week number. Please enter a number between 1 to 7\n");
    }

    return 0;
}
