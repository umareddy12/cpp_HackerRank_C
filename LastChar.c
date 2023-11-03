//Program to print the last character of the string
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input length of the string

    char s[100];  // Assuming a maximum string length of 100 characters
    scanf("%s", s);  // Input string
   // printf("%c\n", s[n]); // wrong answer
    printf("%c\n", s[n-1]); // right answer 
    return 0;
}
