#include <stdio.h>

int main()
{
	int init, steps;

	steps = 0;

	printf("Inital value: ");
	scanf("%d", &init);

	if (init < 2)
	{
		printf("Error.");
	}
	else
	{

		printf("Initial value is %d\n", init);

		while (init != 1)
		{
			steps++; //increment steps by 1

			if (init % 2 == 0)
			{
				init = init/2;
				printf("Next value is %d\n", init);
			}
			else
			{
				init = (init * 3) + 1;
				printf("Next value is %d\n", init);
			}
		}

		printf("Final value %d, number of steps %d\n", init, steps);
	}
}
