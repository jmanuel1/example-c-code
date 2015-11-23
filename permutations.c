#include <stdio.h>

int main()
{
	int base, other1, other2;

	printf("Input a number greater than 2: ");
	scanf("%d", &base);

	if (base < 3)
	{
		printf("Not greater than 2.\n");
	}
	else
	{
		other1 = base - 1;
		other2 = base - 2;
		printf("%d %d %d\n", base, other1, other2);
		printf("%d %d %d\n", other1, base, other2);
		printf("%d %d %d\n", other1, other2, base);
		printf("%d %d %d\n", other2, other1, base);
		printf("%d %d %d\n", other2, base, other1);
		printf("%d %d %d\n", base, other2, other1);
	}
}
