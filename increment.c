#include <stdio.h>

int main()
{
	int a = 5;
	int b = 6;
	int x = 10;
	int y = 11;
	  a = b++;
	  b = ++a;
	  x = y--;
	  y = --y;
	  printf("a is: %d\n", a);
	  printf("b is: %d\n", b);
	  printf("x is: %d\n", x);
	  printf("y is: %d\n", y);
	  return 0;
}
