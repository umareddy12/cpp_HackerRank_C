//Code Chef Problem:Concatenation in C

#include <stdio.h>

int main(void) {
	// your code goes here
	char x[]="Hello";
	char y[]="World";
	strcat(strcat(x," "),y);
	printf("%s",x);
	return 0;
}

