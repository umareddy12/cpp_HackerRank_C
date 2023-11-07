//Code chef problem
#include <stdio.h>
#include <math.h>

int main() {
    int A,B,result1,result2;

    // Scan the first 2 numbers 
    scanf("%d %d", &A, &B);

    result1 = A * A + 2 * A * B + B * B;
    printf("%d\n", result1);

    result2 = A + B;
    printf("%d\n", result2);
    
    // Scan the next 2 numbers 
    scanf("%d %d", &A, &B);

    result1 = A * A + 2 * A * B + B * B;
    printf("%d\n", result1);

    result2 = A + B;
    printf("%d\n", result2);
    
    // Scan the last 2 numbers 
    scanf("%d %d", &A, &B);

    result1 = A * A + 2 * A * B + B * B;
    printf("%d\n", result1);
    
    result2 = A + B;
    printf("%d\n", result2);

    return 0;
}
