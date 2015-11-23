#include <stdio.h>
#include <string.h> //strlen()
#include <stdlib.h> //abs()

int palindrome(char *string);

int main()
{
	char string[255];

	printf("Enter a string (max 255 chars): ");
	scanf("%s", string);

	if (palindrome(string))
	{
		printf("%s is a palindrome\n", string);
	}
	else
	{
		printf("%s is not a palindrome\n", string);
	}
}

int palindrome(char *string)
{
	char rstring[strlen(string)];
	int x;

	for (x = 0; x < strlen(string); x++)
	{
		rstring[abs(strlen(string) - x) - 1] = string[x];
	}
	rstring[strlen(string)] = (int) NULL; //null is a *POINTER*! therefore it must be cast
	if (strcasecmp(string, rstring) == 0) //case insensitive string compare function
	{
		return 1; //true
	}
	else
	{
		return 0; //false
	}
}
