// pe09.c -- output the primes under the number
#include <stdio.h>

int isPrime(int num);

int main(void)
{
	int num, i, j, cnt = 0;

	while (printf("\nEnter a positive number(q to quit): "), scanf("%d", &num))
	{
		if (num <= 0)
		{
			printf("WRONG");
			continue;
		}
		else
		{
			for (i = 2; i < num; i++)
			{
				if (isPrime(i))
				{
					if ((cnt + 1) % 6)
						printf("%d\t", i);
					else printf("%d\n", i);

					cnt++;
				}
				// printf("num is %d, i is %d\n", num, i);
			}
			printf("\n%d primes totally.\n", cnt);
		}
	}

	printf("\nBye!\n");

	return 0;
}

int isPrime(int num)
{
	int i, flag = 1;
	for (i = 2; i * i <= num; i++)
	{
		if (!(num % i))
		{
			flag = 0;
			break;
		}
		// printf("flag is %d\n", flag);
	}

	return flag;
}
