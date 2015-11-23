#include <stdio.h>

int main()
{
  int x;

  x = 0;
  do {
    /* "Hello, world!" is printed at least one time
      even though the condition is false */
      printf( "Hello, world!\n" );
  } while ( x != 0 ); /* don't forget the trailing semi-colon at the end of do-while loops */
  getchar();
}
