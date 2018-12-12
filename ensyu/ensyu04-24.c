#include <stdio.h>

int main(void)
{
  int n, i, j, cnt;

  puts("ピラミッドを作ります。");
  printf("何段ですか：");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    cnt = n - i;
    for (j = 1; j <= cnt; j++)
      putchar(' ');

    cnt = (i - 1) * 2 + 1;
    for (j = 1; j <= cnt; j++)
      putchar('*');
    putchar('\n');
  }
  return 0;
}

// 位置No  = page + 19
