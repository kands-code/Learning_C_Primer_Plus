// pe02.c -- reads input 

#include <stdio.h>

int main(void)
{
	int asch, count = 0; // ascii and character

	while ((asch = getchar()) != EOF)
	{
		count++;
		if (asch == '\n')
		{
			printf("\nChar='\\n', ascii=%d ", asch);
			count = 0;
		}
		else
		{
			if (count % 10 == 0)
			{
				if (asch == '\t')
					printf("\nChar='\\t', ascii=%d ", asch);
				else
					printf("\nChar='%c', ascii=%d ", asch, asch);
			}
			else
			{
				if (asch == '\t')
					printf("Char='\\t', ascii=%d\t", asch);
				else
					printf("Char='%c', ascii=%d\t", asch, asch);
			}
		}
	}
	printf("\nDone!\n");

	return 0;
}
