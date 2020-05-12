/* pe15.c -- read a line of characters */
#include <stdio.h>
int main(void)
{
	char ct, line[256];
	int i = 0, len;

	printf("Enter a line of character: ");

	do
	{
		scanf("%c", &ct);
		line[i] = ct;
		i++;
	}
	while (ct != '\n');

	len = strlen(line);

	for (i = len-2; i >= 0; i--)
	{
		printf("%c", line[i]);
	}
	printf("\n");

	return 0;
}
