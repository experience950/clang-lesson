#include <stdio.h>

int main(void)
{
  int n, i, j;

  puts("正方形を作ります。");
  printf("何段ですか：");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++)
      putchar('*');
    putchar('\n');
  }
  return 0;
}
