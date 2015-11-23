#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	float input, randOutput;

	printf("Enter number: ");
	scanf("%f", &input);

	srand48((long) time(NULL));
	randOutput = drand48() * input;
	printf("Random number between 0 and %f: %f\n", input, randOutput);
}
