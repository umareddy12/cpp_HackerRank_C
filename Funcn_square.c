#include <stdio.h>

// User-defined function to calculate the square of a number
int square(int num) {
    return num * num;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int result1 = square(num1); // Call the square function
    int result2 = square(num2); // Call the square function again

    printf("Square of %d is %d\n", num1, result1);
    printf("Square of %d is %d\n", num2, result2);

    return 0;
}
