/* pe01.c -- convert min to hour and min */
#include <stdio.h>
#define MPH 60 // define the symbolic constant for 60

int main(void) {
	int min = 0, hour = 0, ms = 0;

	printf("Enter minutes(0 to end):\n");
	scanf("%d", &min);

	while(min > 0) {
		hour = min / MPH;
		ms = min % MPH;

		printf("%d minutes convert to hour and minute is %d hour(s) %d minute(s).\n", min, hour, ms);

		printf("Enter minutes(0 to end):\n");
		scanf("%d", &min);
	}

	return 0;
}
