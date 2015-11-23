#include <stdio.h>

int main()
{
	printf("Size of int in bytes: %zd\n", sizeof(int)); //%zd means "the following decimal integer is of type size_t or ssize_t"
	printf("Size of signed int in bytes: %zd\n", sizeof(signed int));
	printf("Size of unsigned int in bytes: %zd\n", sizeof(unsigned int));
	printf("\n");
	printf("Size of short int in bytes: %zd\n", sizeof(short int));
	printf("Size of signed short int in bytes: %zd\n", sizeof(signed short int));
	printf("Size of unsigned short int in bytes: %zd\n", sizeof(unsigned short int));
	printf("\n");
	printf("Size of long int in bytes: %zd\n", sizeof(long int));
	printf("Size of signed long int in bytes: %zd\n", sizeof(signed long int));
	printf("Size of unsigned long int in bytes: %zd\n", sizeof(unsigned long int));
	printf("\n");
	printf("Size of double in bytes: %zd\n", sizeof(double));
	printf("Size of float in bytes: %zd\n", sizeof(float));
	printf("Size of long double in bytes: %zd\n", sizeof(long double));
	printf("\n");
	printf("Size of char in bytes: %zd\n", sizeof(char));
	printf("Size of signed char in bytes: %zd\n", sizeof(signed char));
	printf("Size of unsigned char in bytes: %zd\n", sizeof(unsigned char));
	printf("\n");
	printf("Size of long long int in bytes: %zd\n", sizeof(long long int));
	printf("Size of signed long long int in bytes: %zd\n", sizeof(signed long long int));
	printf("Size of unsigned long long int in bytes: %zd\n", sizeof(unsigned long long int));
}
