#include <stdio.h>

int main()
{
	float c;

	printf("Degrees in Celsius: ");
	scanf("%f", &c);
	printf("%f degrees Celsius converts to %f degrees Fahrenheit\n", c, (c * 1.8) + 32);
}
