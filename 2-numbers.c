#include <stdio.h>

int main()
{
	float a, b;

	printf("Input 2 numbers:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	printf("Sum: %f\n", a + b);
	printf("Average: %f\n", (a + b)/2.0);
	printf("Sum of Squares: %f\n", (a * a) + (b * b));
}
