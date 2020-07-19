#include <stdio.h>
#include <ctype.h>

int my_atoi(char * i);

// CONSTANT
char NUM[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

// test
int main(void)
{
	int resf = my_atoi("12379.9");
	int ress = my_atoi("m123");

	printf("%d, %d\n", resf, ress);

	return 0;
}

int my_atoi(char * i)
{
	int d = 0, p = 0, res = 0;
	while (i[d] != '\0')
	{
		if (isdigit(i[d]))
		{
			for (p = 0; p < 10; p++)
				if (NUM[p] == i[d])
					res = 10*res + p;
		}
		else if (i[d] == '.')
			break;
		else
			return 0;
		d++;
	}

	return res;
}
