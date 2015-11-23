#include <stdio.h>

int main()
{
	int a, b, c, d, e, f;
	a = 5;
	b = 5;

	c = a + b; /* assign the sum of and b to c */
	d = a * b; /* assign the product of a and b to d */
	e = a - b; /* assign the difference between a and b to e */
	f = a/b; /* assign the quotient of a and b to f */

	printf("%d + %d = %d\n", a, b, c);
	printf("%d * %d = %d\n", a, b, d);
	printf("%d - %d = %d\n", a, b, e);
	printf("%d/%d = %d\n", a, b, f);

	return 0;
}
