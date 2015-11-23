#include <stdio.h>
#define swap(t, x, y) swap_tmp = (t) x; x = (t) y; y = swap_tmp

int main()
{
	int swap_tmp, a, b;

	printf("Two values to swap:");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d %d\n", a, b);

	swap(int, a, b);
	printf("%d %d\n", a, b);
}
