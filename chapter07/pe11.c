// pe11.c -- selling vegetables
#include <stdio.h>
#define A 2.05f		// cost for artichokes
#define B 1.15f		// cost for beets
#define C 1.09f		// cost for carrots
#define DIS 0.05f	// discount 5%

int main(void)
{
	int i;
	float num[3], charge[3];
	float total = 0.0f, discount, shipping, grand;
	float price, weight = 0.0f;
	char ch;

	while (1)
	{
		printf("Welcome to ABC Mail Order Grocery\n");
		printf("Enter 'q' to quit or 'o' to go on: ");
		scanf("%c", &ch);
		getchar();
		if (ch == 'o')
		{
			for (i = 0; i < 3; i++)
			{
				num[i] = 0.0f;
				charge[i] = 0.0f;
			}

			while (1)
			{
				printf("Here is some vegetables\n");
				printf("a) artichokes $2.05 per pound\t\tb) beets $1.15 per pound\nc) carrots $1.09 per pound\t\tq) quit\n");
				printf("please select what you want: ");
				scanf("%c", &ch);
				getchar();
				switch (ch)
				{
				case 'a': price = A;
					  break;
				case 'b': price = B;
					  break;
				case 'c': price = C;
					  break;
				case 'q': goto END;
				default: printf("%c # wrong!\n", ch);
					 continue;
				}

				printf("How many do you want: ");
				scanf("%f", &num[ch - 'a']);
				getchar();
				charge[ch -'a'] = price * num[ch - 'a'];
			}
END:			printf("Thank you to choose us\n");
			for (i = 0; i < 3; i++)
			{
				total += charge[i];
				weight += num[i];
			}

			printf("vegetables\tunit price\tordered\tcost\n");
			for (i = 0; i< 3; i++)
			{
				if (num[i] != 0.0f)
				{
					if (i == 0)
						printf("artichokes\t$2.05\t\t%.2f\t$%.2f\n", num[i], charge[i]);
					else if (i == 1)
						printf("beets\t\t$1.15\t\t%.2f\t$%.2f\n", num[i], charge[i]);
					else
						printf("carrots\t\t$1.09\t\t%.2f\t$%.2f\n", num[i], charge[i]);
				}

			}

			printf("discount: $%.2f\n", (discount = (total > 100) ? (total * DIS) : 0.0f));

			if (weight > 20) shipping = 14 + (weight - 20) * 0.5f;
			else if (weight > 5) shipping = 14.0f;
			else if (weight) shipping = 6.50f;
			else shipping = 0.0f;
			printf("shipping charge: $%.2f\n", shipping);

			grand = total - discount + shipping;
			printf("grand total: $%.2f\n", grand);
		}
		else if (ch == 'q') break;
		else printf("wrong!\n");
	}

	printf("Have a good time\n");

	return 0;
}
