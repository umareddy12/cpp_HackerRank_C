#include <stdio.h>

void compute_value(int a, int b) {
   
    int c = a * a + 2 * a * b + b * b;
    int d = a + b;
    printf("%d\n", c);
    printf("%d\n", d);
}
    


int main() {
    int t=3;

    for (int i = 0; i < t; i++) {
        int A, B;
        scanf("%d %d", &A, &B);
        compute_value(A, B);
    }

    return 0;
}
