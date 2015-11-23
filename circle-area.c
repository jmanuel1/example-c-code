#include <stdio.h>

main()
{
	float r, a;

	printf("Enter the radius: ");
	scanf("%f", &r);
	a = 3.14159 * r * r;
	printf("The area of a circle of radius %f units is %f square units.\n", r, a);
}
