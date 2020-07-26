/* pe16.c -- get options from command line */
#include <stdio.h>
#include <string.h>

#define N 1024

char * s_gets(char * st, int n);
int get_input(char str[N][N]);
void print_input(char str[N][N], int cnt);
void to_upper(char str[N][N], int cnt);
void to_lower(char str[N][N], int cnt);

int main(int argc, char * argv[])
{
	char str[N][N];
	int i, cnt;

	// puts(argv[1]);

	if (argc > 2)
		printf("You should use no more than one option to this program");
	else
	{
		cnt = get_input(str);
		if (argc == 1 || strcmp(argv[1], "-p") == 0)
			print_input(str, cnt);
		else if (strcmp(argv[1], "-u") == 0)
			to_upper(str, cnt);
		else if (strcmp(argv[1], "-l") == 0)
			to_lower(str, cnt);
		else
			printf("Error!");
	}

	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val, tmp[n];
	int i = 0;

	ret_val = fgets(tmp, n, stdin);
	// printf("%p\n", ret_val); // for test
	if (ret_val)
	{
		strncpy(st, tmp, n);
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}

int get_input(char str[N][N])
{
	// to count to number of strings
	int cnt = 0;
	// to test if user input the EOF
	char * test = "";
	// prompt the user to input
	printf("Please enter %d strings or use EOF to stop input:\n", N);
	// get input
	while (cnt < 10 && test != NULL)
	{
		test = s_gets(str[cnt], N - 1);
		if (test != NULL)
			cnt++;
	}
	// to clear the EOF from the stdin stream
	clearerr(stdin); // include in the stdio.h
	// return the number of strings
	return cnt;
}

void print_input(char str[N][N], int cnt)
{
	printf("\n*******************************\n");
	int i = 0;
	for (i = 0; i < cnt; i++)
		puts(str[i]);
}

void to_upper(char str[N][N], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; str[i][j] != '\0'; j++)
			if (str[i][j] >= 'a' && str[i][j] <= 'z')
				str[i][j] -= 'a' - 'A';
	print_input(str, n);
}

void to_lower(char str[N][N], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; str[i][j] != '\0'; j++)
			if (str[i][j] >= 'A' && str[i][j] <= 'Z')
				str[i][j] += 'a' - 'A';
	print_input(str, n);
}

