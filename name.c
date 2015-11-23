#include <stdio.h>

int main()
{
	char name[255], address[255];
	int age;

	printf("Enter your name (max 255 chars): ");
	scanf("%s", name);
	printf("Enter address (max 255 chars): ");
	scanf("%s", address);
	printf("Enter age: ");
	scanf("%d", &age);

	printf("Name: %s; Address: %s; Age: %d\n", name, address, age);
}
