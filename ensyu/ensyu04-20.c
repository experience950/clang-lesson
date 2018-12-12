#include <stdio.h>

int main(void)
{
  int i, j;

  for (i = 0; i <= 9; i++) {
    if (i == 0) {
      puts("   |  1  2  3  4  5  6  7  8  9");
      puts("---+----------------------------");
      i++;
    }
    printf(" %d |", i);
    for (j = 1; j <= 9; j++)
      printf("%3d", i * j);
    putchar('\n');
  }
  return 0;
}
