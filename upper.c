#include <stdio.h>
#include <string.h> //strlen()
#include <ctype.h> //toupper()
int strup(char *string);

int main()
{
	char string[256];
	int x;

	printf("Enter a string (max 256 chars): ");
	scanf("%s", string);
	strup(string);

	printf("\n%s\n", string);
}

int strup(char *string)
{
	int x;

	for (x = 0; x < strlen(string); x++)
	{
		string[x] = (char) toupper((int) string[x]);
	}
}
