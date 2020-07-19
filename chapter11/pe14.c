#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	int index;
	float base, ans = 1;
	base = atof(argv[1]);
	index = atoi(argv[2]);

	for (; index > 0; index--)
		ans *= base;
	printf("The answer is %f\n", ans);

	return 0;
}
