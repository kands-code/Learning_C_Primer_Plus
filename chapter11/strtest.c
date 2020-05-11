/* strtest.c -- test the string elements */ 
#include <stdio.h>

int main(void)
{
	const char str[10] = "hello.\n"; // string are usually manipulated as constant
	// are automatically initialized null character('\0')
	printf("%d, %d, %d\n", str[7], str[8], str[9]); // prints "0, 0, 0"
	puts(str); // output str
	// change test
	char text[] = "here!\n";
	// text = "hell!\n"; // It's not allowed in C!
	puts(text);
	/*
	The name of an array is const(in other words, unmodifiable lvalue)
	The following statements is wrong:

		int arr[5] = {1, 2, 3};
		arr = {2, 3, 4};
		printf("%d", arr[0]);
	*/

	return 0;
}