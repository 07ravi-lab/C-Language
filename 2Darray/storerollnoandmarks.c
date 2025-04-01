#include <stdio.h>

int main() {
    int students = 4;  // Number of students
    int attributes = 2;  // Roll number and marks
    int data[students][attributes];  // Matrix to store roll numbers and marks

    // Input roll numbers and marks
    for (int i = 0; i < students; i++) {
        printf("Enter roll number and marks for student %d: ", i + 1);
        scanf("%d %d", &data[i][0], &data[i][1]);
    }

    // Display the data
    printf("\nStudent Data:\n");
    printf("Roll Number\tMarks\n");
    for (int i = 0; i < students; i++) {
        printf("%d\t\t%d\n", data[i][0], data[i][1]);
    }

    return 0;
}
