#include <stdio.h>
#include <stdlib.h>

int main() {

  int y, x = 10;
  y = x++;

  printf("x = %d\n", x);
  printf("y = %d\n", y);
  system("pause");
  return 0;
}
