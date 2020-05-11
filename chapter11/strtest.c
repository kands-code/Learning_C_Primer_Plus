/* strtest.c -- test the string elements */ 
#include <stdio.h>

int main(void)
{
	const char str[10] = "hello.\n"; // string are usually manipulated as constant
	// are automatically initialized null character('\0')
	printf("%d, %d, %d\n", str[7], str[8], str[9]); // prints "0, 0, 0"
	puts(str); // output str

	return 0;
}