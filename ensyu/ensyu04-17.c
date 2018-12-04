#include <stdio.h>

int main(void)
{
  int i, n;

  printf("nの値値：");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
    printf("%dの２乗は%d\n", i, i * i);

  return 0;
}

// 位置No  = page + 19
