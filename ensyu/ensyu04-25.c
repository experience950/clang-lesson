#include <stdio.h>

int main(void)
{
  int n, i, j, cnt;

  puts("下向き数字ピラミッドを作ります。");
  printf("何段ですか：");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    cnt = n - i; /* 出力するスペースの個数 */
    for (j = 1; j <= cnt; j++)
      putchar(' ');

    cnt = 1 + (n - 1) * 2;  /* 出力する数値の個数 = 1 + (段数N - 1) * 2 */
    for (j = cnt; j >= 1; j--)
      printf("%d", i % 10);
    putchar('\n');
  }
  return 0;
}

/* 3 → 5, 5 → 9, 10 → 19 */
// 位置No  = page + 19
