//code chef problem:User defined function
#include <stdio.h>
void list_generator(int limit) {
    
    for(int i=1;i<=limit;i++)
    {
        printf("%d",i);
    }
    printf("\n");
}

// Do not update the code below this line

int main() {
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);

    list_generator(A);
    list_generator(B);

    return 0;
}
