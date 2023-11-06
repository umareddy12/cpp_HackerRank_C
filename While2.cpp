#include <stdio.h>

int main() {
  int a = 1;
  int b = 4;
  while ( a != b ) {
    printf("%d ", b);
    b = b+1;
  }
  return 0;
}
