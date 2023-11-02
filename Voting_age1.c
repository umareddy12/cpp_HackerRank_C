//Code chef problem:Curly braces in C

#include <stdio.h>

int main() {

  int Age = 25;
  int Vage = 18;

  if (Age < Vage)  {
  
    printf("Not old enough to vote.\n");
    printf("Wait for %d years", Vage - Age);
  }
  
  else 
  {
    printf("Old enough to vote!");
  }
  
  return 0;
}
