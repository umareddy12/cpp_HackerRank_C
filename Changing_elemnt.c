//code chef problem:Changing the elements of an Array in C
#include <stdio.h>
#include <string.h>

int main() {

  char mnts[4][4] = {"Jan", "Feb", "Dec", "Apr"};
  // your code goes here
  strcpy(mnts[2],"Mar");
  printf("%s",mnts[2]);
  return 0;
}
