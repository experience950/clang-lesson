#include <stdio.h>

int main(void)
{
  int i, n;
  int cnt = 0;

  printf("整数値：");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
    if (n % i == 0) {
      printf("%d ", i);
      putchar('\n');
      cnt++;
    }
  printf("約数は%d個です。\n", cnt);
  return 0;
}

// 位置No  = page + 19
