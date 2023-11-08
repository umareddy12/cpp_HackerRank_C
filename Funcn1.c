//codechef problem:Functions

#include <stdio.h>

// Function to calculate C
int calculateC(int A, int B) {
    return A * A + 2 * A * B + B * B;
}

// Function to calculate D
int calculateD(int A, int B) {
    return A + B;
}

int main() {
    
    for (int i = 0; i < 3; i++) {
        int A, B;
        scanf("%d %d", &A, &B);

        // Use functions to calculate C and D
        int C = calculateC(A, B);
        int D = calculateD(A, B);

        printf("%d\n", C);
        printf("%d\n", D);
    }

    return 0;
}
