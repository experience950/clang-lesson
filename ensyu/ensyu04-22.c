#include <stdio.h>

int main(void)
{
  int i, j;
  int n1, n2, row, col;

  puts("横長の長方形を作ります。");
  printf("一辺（その１）：");  scanf("%d", &n1);
  printf("一辺（その２）：");  scanf("%d", &n2);

  if (n1 < n2) {
    row = n1; col = n2;
  } else {
    row = n2; col = n1;
  }

  for (i = 1; i <= row; i++) {
    for (j = 1; j <= col; j++)
      putchar('*');
    putchar('\n');
  }
  return 0;
}

// 位置No  = page + 19
