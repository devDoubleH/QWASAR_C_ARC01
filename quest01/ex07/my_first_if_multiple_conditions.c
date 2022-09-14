#include <stdio.h>

int main() {
  int a = 10;
  int b = 9;
  int c = 11;
  int d = 10;
  int y = 9;
  int z = 11;

  if (a > b && a < c && a == d) {
    printf("a is bigger than b AND smaller than c AND equal to d\n");
  }
  if (z > a || y > a) {
    printf("z OR y are bigger than a\n");
  }
  return 0;
}