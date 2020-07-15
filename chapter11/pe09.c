/* pe09.c -- reverse the string */
#include <stdio.h>

void reverse(char * str);

int main(void)
{
	char str[50], opt = 'y';
	while (opt == 'y')
	{
		puts("please enter a string:");
		fgets(str, 49, stdin);
		reverse(str);
		printf("The reverse of the string is %s.\n", str);
		printf("Do you want to try again?(y or n): ");
		opt = getchar();
		while (getchar() != '\n')
			scanf("%*s");
	}
	puts("Bye!");

	return 0;
}

void reverse(char * str)
{
	char t;
	int i, len = 0;
	for (i = 0; *(str + i) != '\0'; i++) len++;
	for (i = 0; i < len / 2; i++)
	{
		t = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = t;
	}
}

