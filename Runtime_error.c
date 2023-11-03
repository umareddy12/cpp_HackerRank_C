//code chef problem:Runtime error due to 0 used as a divisor in C

#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (b == 0) {
        printf("infinity\n");
        return 0;
    }
    
    printf("%d\n", a / b);
    return 0;
}
