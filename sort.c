#include <stdio.h>
#include <stdlib.h> //qsort(), malloc(), free(), and exit()

int sort(void const *, void const *);
int (*psort) (void const *, void const *) = &sort; //pointer to a function

int main(int argc, char *argv[])
{
	int vals[10], x;
	char *r;

	printf("Enter ten numbers:\n");
	for (x = 0; x < 10; x++)
	{
		scanf("%d", &(vals[x]));
	}

	qsort(vals, 10, sizeof(int), psort);
	printf("\n");

	if (argc == 2)
	{
		r = argv[1];
		if ((r[0] == '-') && (r[1] == 'r'))
		{
			for (x = 9; x > (0 - 1); x--)
			{
				printf("%d\n", vals[x]);
			}
		}
	}
	else
	{
		for (x = 0; x < 10; x++)
		{
			printf("%d\n", vals[x]);
		}
	}
}

int sort(void const *a, void const *b)
{
	return * (int const *) a - * (int const *) b; //dereference casted pointers
}
