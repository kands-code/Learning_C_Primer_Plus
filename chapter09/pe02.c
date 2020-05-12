/* pe02.c -- prints the ch in columns i through j */
#include <stdio.h>
// pe03 is same as pe02
void chline(char, int, int);

int main(void)
{
	int i, j;
	char ch;

	printf("Please enter the character: ");
	scanf("%c", &ch); // ch = getchar();
	printf("Please enter rows: ");
	scanf("%d", &j);
	printf("Please enter columns: ");
	scanf("%d", &i);

	chline(ch, i, j);

	return 0;
}

void chline(char ch, int i, int j)
{
	int x, y;
	for (x = 0; x < j; x++)
	{
		for (y = 0; y < i; y++)
			putchar(ch);
		putchar('\n');
	}
}
