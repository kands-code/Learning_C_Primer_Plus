/* pe11.c -- manipulate the string list */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// to make sure this program can run on both win and linux
#ifdef WIN32
#include <windows.h>
#elif linux
#include <unistd.h>
#endif

#define MAX_V 10
#define MAX_L 100

/* the gets function */
char * s_gets(char * st, int n);
/* used to get string list */
int get_list(char str_list[MAX_V][MAX_L]);
/* copy list */
void copy(char dest[MAX_V][MAX_L], char src[MAX_V][MAX_L], int num);
/* show loading animation */
void animation(void);
/* show the menu */
int menu(void);
/* print the original list */
void print_original_list(char str_list[MAX_V][MAX_L], int num);
/* print the strings in ASCII order */
void print_ascii_list(char str_list[MAX_V][MAX_L], int num);
/* print the strings in length order*/
void print_length_list(char str_list[MAX_V][MAX_L], int num);
/* print the strings in the first word length order */
void print_first_word_list(char str_list[MAX_V][MAX_L], int num);

/* the main function */
int main(void)
{
	int opt, cnt;
	char str[MAX_V][MAX_L], tmp[MAX_V][MAX_L];
	cnt = get_list(str);
	copy(tmp, str, cnt);
	animation();
	while (opt = menu())
	{
		switch (opt)
		{
			case 1:
				print_original_list(str, cnt);
				break;
			case 2:
				print_ascii_list(tmp, cnt);
				break;
			case 3:
				print_length_list(tmp, cnt);
				break;
			case 4:
				print_first_word_list(tmp, cnt);
				break;
			default:
				printf("ERROR!!!");
		}

		printf("Press any key to continue.....");
		getchar();		
		animation();
	}
	puts("The program is stoped.");
	puts("Farewell!");

	return 0;
}

/* the gets function */
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

/* used to get string list */
int get_list(char str_list[MAX_V][MAX_L])
{
	// to count to number of strings
	int cnt = 0;
	// to test if user input the EOF
	char * test = "";
	// prompt the user to input
	printf("Please enter %d strings or use EOF to stop input:\n", MAX_V);
	// get input
	while (cnt < 10 && test != NULL)
	{
		test = s_gets(str_list[cnt], MAX_L - 1);
		if (test != NULL)
			cnt++;
	}
	// to clear the EOF from the stdin stream
	clearerr(stdin); // include in the stdio.h
	// return the number of strings
	return cnt;
}

/* copy list */
void copy(char dest[MAX_V][MAX_L], char src[MAX_V][MAX_L], int num)
{
	int i = 0;
	for (i = 0; i < num; i++)
		strncpy(dest[i], src[i], MAX_L);
}

/* show animation */
void animation(void)
{
	int i = 0;
	printf("Please wait 5s [               ]\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
	for (i = 0; i < 5; i++)
	{
#ifdef WIN32
		Sleep(1000);
#elif linux
		sleep(1);
#endif
		printf("###");
		fflush(stdout);
	}
	putchar('\n');
#ifdef WIN32
	system("cls");
#elif linux
	system("clear");
#endif
}

/* show the menu */
int menu(void)
{
	int opt = -1;
	puts("-----------------------------MENU--------------------------------");
	puts("[1] print the original list");
	puts("[2] print the list in the ASCII order");
	puts("[3] print the list in the length order");
	puts("[4] print the list in the first word length order");
	puts("[0] quit\n\n");
	printf("Please enter your choice: ");
	scanf("%d", &opt);
	if (0 > opt || opt > 4)
	{
		printf("Please enter the correct option number: ");
		scanf("%d", &opt);
	}
	while (getchar() != '\n')
		continue;

	return opt;
}

/* print the original list */
void print_original_list(char str_list[MAX_V][MAX_L], int num)
{
	int i = 0;
	puts("\n-------------------------------------\n");
	for (i = 0; i < num; i++)
		puts(str_list[i]);
	puts("\n-------------------------------------\n");
}

/* print the strings in ASCII order */
void print_ascii_list(char str_list[MAX_V][MAX_L], int num)
{
	int i, j;
	char tmp[MAX_L];
	for (i = 0; i < num - 1; i++)
		for (j = i + 1; j < num; j++)
			if (strcmp(str_list[i], str_list[j]) > 0)
			{
				strcpy(tmp, str_list[i]);
				strcpy(str_list[i], str_list[j]);
				strcpy(str_list[j], tmp);
			}
	print_original_list(str_list, num);
}

/* print the strings in length order*/
void print_length_list(char str_list[MAX_V][MAX_L], int num)
{
	int i, j;
	char tmp[MAX_L];
	for (i = 0; i < num - 1; i++)
		for (j = i + 1; j < num; j++)
			if (strlen(str_list[i]) > strlen(str_list[j]))
			{
				strcpy(tmp, str_list[i]);
				strcpy(str_list[i], str_list[j]);
				strcpy(str_list[j], tmp);
			}
	print_original_list(str_list, num);
}

/* print the strings in the first word length order */
void print_first_word_list(char str_list[MAX_V][MAX_L], int num)
{
	int inword = 0, i, j, t, cnt[num];
	for (i = 0; i < num; i++)
		cnt[i] = 0;
	char tmp[MAX_L];

	// count
	for (i = 0; i < num; i++)
		for (j = 0; j < MAX_L; j++)
		{
			if (!inword && !(isspace(str_list[i][j]) || str_list[i][j] == '\0'))
			{
				inword = 1;
				cnt[i]++;
			}
			else if (inword && !(isspace(str_list[i][j]) || str_list[i][j] == '\0'))
				cnt[i]++;
			else if (!inword && (isspace(str_list[i][j]) || str_list[i][j] == '\0'))
				continue;
			else
			{
				inword = 0;
				break;
			}
		}
	/*
	for (i = 0; i < num; i++)
		printf("%d\n", cnt[i]);
	*/

	// sort
	for (i = 0; i < num - 1; i++)
		for (j = i + 1; j < num; j++)
			if (cnt[i] > cnt[j])
			{
				strcpy(tmp, str_list[i]);
				t = cnt[i];
				strcpy(str_list[i], str_list[j]);
				cnt[i] = cnt[j];
				strcpy(str_list[j], tmp);
				cnt[j] = t;
			}

	// print
	print_original_list(str_list, num);
}

