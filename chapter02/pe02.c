/* pe02.c -- print your name and address */
#include <stdio.h>
int main(void)
{
		char name[20];
		char address[100];
		//get your name
		printf("please enter your name:\n");
		scanf("%s", name);
		//get you address
		printf("Please enter your address:\n");
		scanf("%s", address);
		//format to print your name and address
		printf("Your name is %s, and your address is %s.\n", name, address);

		return 0;
}
