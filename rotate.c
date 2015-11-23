#include <stdio.h>

int rotate(int *a, int *b, int *c);

int main()
{
	int d, e, f;

	printf("Enter 3 values:\n");
	scanf("%d", &d);
	scanf("%d", &e);
	scanf("%d", &f);
	printf("%d %d %d rotated is...\n", d, e, f);

	rotate(&d, &e, &f);
	printf("%d %d %d\n", d, e, f);
}

int rotate(int *a, int *b, int *c)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = *c;
	*c = tmp;
}
