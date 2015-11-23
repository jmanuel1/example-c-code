#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int numbers[6], x;

	srand((unsigned int) time(NULL));
	for (x = 0; x < 6; x++)
	{
		numbers[x] = (rand() % 49) + 1;
		printf("%d ", numbers[x]);
	}
	printf("\n");
}
