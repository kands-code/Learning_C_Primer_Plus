#include <stdio.h>
#include <ctype.h>

#define LEN 1024
#define ANS 5

int read_input(char * str, int len);
void test(int ans[ANS], char * str);
int wordscnt(char * str);
int uppercnt(char * str);
int lowercnt(char * str);
int punctcnt(char * str);
int digitcnt(char * str);

int main(void)
{
	char str[LEN], opt = 'y';
	int i, t, ans[ANS];
	for (i = 0; i < ANS; i++)
		ans[i] = 0;

	while (opt == 'y')
	{
		puts("Please enter what you want test(use enter and EOF to stop):");
		t = read_input(str, LEN);
		if (t > 0)
		{
			test(ans, str);
			printf("The number of words: %d\n", ans[0]);
			printf("The number of uppercase letters: %d\n", ans[1]);
			printf("The number of lowercase letters: %d\n", ans[2]);
			printf("The number of punctuation characters: %d\n", ans[3]);
			printf("The number of digits: %d\n", ans[4]);
		}
		else
			puts("ERROR!!!");
		printf("Do you want to try again? ");
		opt = getchar();
		while (getchar() != '\n')
			continue;
	}

	puts("Farewell!");
	
	return 0;
}

int read_input(char * str, int len)
{
	int ch = 0, i = 0;
	while ((ch = getchar()) != EOF && i < len)
	{
		str[i++] = ch;
		fflush(stdin);
	}
	str[i - 1] = '\0';
	clearerr(stdin);
	return i;
}

void test(int ans[ANS], char * str)
{
	ans[0] = wordscnt(str);
	ans[1] = uppercnt(str);
	ans[2] = lowercnt(str);
	ans[3] = punctcnt(str);
	ans[4] = digitcnt(str);
}

int wordscnt(char * str)
{
	int cnt = 0, inword = 0, i = 0;

	while (str[i] != '\0')
	{
		if (inword == 0 && !(isspace(str[i]) || str[i] == '\0') && isalpha(str[i]))
		{
			inword = 1;
			cnt++;
		}
		else if (inword == 1 && (isspace(str[i]) || str[i] == '\0'))
			inword = 0;

		i++;
	}

	return cnt;
}

int uppercnt(char * str)
{
	int cnt = 0, i = 0;
	while (str[i] != '\0')
	{
		if (isupper(str[i]))
			cnt++;
		i++;
	}

	return cnt;
}

int lowercnt(char * str)
{
	int cnt = 0, i = 0;
	while (str[i] != '\0')
	{
		if (islower(str[i]))
			cnt++;
		i++;
	}

	return cnt;
}

int punctcnt(char * str)
{
	int cnt = 0, i = 0;
	while (str[i] != '\0')
	{
		if (ispunct(str[i]))
			cnt++;
		i++;
	}

	return cnt;
}

int digitcnt(char * str)
{
	int cnt = 0, indigit = 0, i = 0;

	while (str[i] != '\0')
	{
		if (indigit == 0 && !(isspace(str[i]) || str[i] == '\0') && isdigit(str[i]))
		{
			indigit = 1;
			cnt++;
		}
		else if (indigit == 1 && !isdigit(str[i]))
			indigit = 0;

		i++;
	}

	return cnt;
}

