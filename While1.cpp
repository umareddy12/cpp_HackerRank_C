#include <stdio.h>

int main() {
  int a = 4;
  int b = 1;
  while ( a != b ) {
    printf("%d ", b);
    b = b+1;
  }
  return 0;
}
