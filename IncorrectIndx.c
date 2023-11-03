//code chef problem:Incorrect Index in c
#include <stdio.h>

int main() {
    char s[100];  // Assuming a maximum string length of 100 characters
    scanf("%s", s);  // Input string

    // Check if the string has at least 7 characters
    if (strlen(s) >=7) {
        printf("%c%c%c\n", s[0], s[3], s[5]);
    } else {
        printf("Input string is too short\n");
    }

    return 0;
}
