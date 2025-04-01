#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Ravi Raj";  // Declare a mutable character array
    char *s2 = s1;           // s2 points to the same array as s1

    // Modify the first character
    s1[0] = 'M';

    // Print the modified string using s2
    printf("%s", s2);

    return 0;
}
