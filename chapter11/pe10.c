/* pe10.c -- remove the space in the string */
#include <stdio.h>
#include <ctype.h>

void trim_space(char * str);

int main(void)
{
	char opt = 'y', str[50];
	while (opt == 'y')
	{
		puts("please enter a string:");
		fgets(str, 49, stdin);
		trim_space(str);
		printf("After trimmed the space off the string, the string become:\n%s\n", str);
		printf("Don you want to try again?(y or n): ");
		opt = getchar();
		while (getchar() != '\n')
			scanf("%*s");
	}

	puts("Farewell!");

	return 0;
}

void trim_space(char * str)
{
	int i, j, len = 0;
	char t;
	for (i = 0; *(str + i) != '\0'; i++) len++;
	for (i = 0; i < len; i++)
		if (isspace(*(str + i)))
		{
			for (j = i; j < len - 1; j++)
				str[j] = str[j + 1];
			str[len - 1] = '\0';
			len--;
		}
}

