#include <stdio.h>

int main()
{
    int this_is_a_number;

    printf( "Please enter a number: " );

    /* the string "%d" tells scanf to look for an integer
    placing a "&" before the name of a variable passes its location instead of its value */
    scanf( "%d", &this_is_a_number );

    printf( "You entered %d\n", this_is_a_number );
    getchar();
    return 0;
}
