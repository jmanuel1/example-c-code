#include <stdio.h>
#include <stdlib.h> //malloc() and free()

int main()
{
	int howmany, *array, x, tmp;

	printf("How many integers to read: ");
	scanf("%d", &howmany);

	array = (int *) malloc(howmany * sizeof(int)); //(int *) means typecast to integer pointer
	if (array == NULL)
	{
		printf("Out of memory.\n");
	}
	else
	{
		for (x = 0; x < howmany; x++)
		{
			printf("Enter integer %d: ", x + 1);
			scanf("%d", &tmp);
			array[x] = tmp;
		}
		free(array);
		array = NULL; //to prevent memory leaks
	}
}
