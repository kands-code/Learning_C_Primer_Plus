#include <stdio.h>

int main(int argc, char * argv[])
{
	int i = 0;
	for (i = argc - 1; i > 0; i--)
		printf("%s ", argv[i]);
	puts("");

	return 0;
}
