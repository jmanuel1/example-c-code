#include <stdio.h>

int main()
{
  int x;
  int y;
  int array[8][8]; /* Declares an array like a chessboard */

  printf( "Array Indices:\n" );
  for ( x = 0; x < 8; x++ ) {
	  for ( y = 0; y < 8; y++ ) {
		array[x][y] = x * y;
		printf( "[%d][%d]=%d ", x, y, array[x][y] );
	  }
	        printf( "\n" );
  }
  getchar();
}
