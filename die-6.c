#include <stdio.h>
#include <stdlib.h> //rand(), srand()
#include <time.h> //time()

int main()
{
	int result;

	srand((unsigned int) time(NULL)); //seed is current time
	result = (rand() % 6) + 1;
	printf("Die rolled: %d\n", result);
}
