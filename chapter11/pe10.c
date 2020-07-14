/* pe10.c -- remove the space in the string */
#include <stdio.h>
#include <ctype.h>

void trim_space(char str)
{
	int i, j, len = 0;
	char t;
	for (i = 0; *(str + i) != '\0'; i++) len++;
	for (i = 0; i < len; i++)
	{
		if (isspace(*(str + i)))
		{
			for (j = i; j < len; j++)
			{

			}
		}
	}
}
