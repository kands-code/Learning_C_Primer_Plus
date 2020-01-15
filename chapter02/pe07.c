/* pe07.c -- print smile! */
#include <stdio.h>

void p_s(void);

int main(void)
{
		int i, j;
		//use for-loop to print this shape
		for(i = 3;i > 0;i--)
		{
				for(j = 0;j < i;j++)
				{
						p_s();
				}
				printf("\n");
		}

		return 0;
}

void p_s(void)
{
		printf("Smile!");
}
