#include <stdio.h>

int main() {
    int n; // Number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare a 2D array for storing marks of n students in 3 subjects (P, C, M)
    int marks[n][3];

    // Input marks for each student
    for (int i = 0; i < n; i++) {
        printf("Enter marks for student %d (Physics, Chemistry, Mathematics): ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    // Display the marks
    printf("\nMarks entered:\n");
    printf("Student\tPhysics\tChemistry\tMathematics\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%d\t\t", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
