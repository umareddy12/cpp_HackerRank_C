//code chef problem:User input Loop in C
#include <stdio.h>

int main(void) {
	// your code goes here
	int num;
  scanf("%d", &num);
  int a = 0;
  while (a < num ) {
    printf("%d\n", a);
    a = a+1;
  }
	return 0;
}

