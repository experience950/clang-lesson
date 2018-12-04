#include <stdio.h>

int main(void)
{
  int num, i;

  printf("正の整数：");
  scanf("%d", &num);

  i = 1;
  while (i <= num) {
    if (i % 2 != 0)
      putchar('+');
    else
      putchar('-');
    ++i;
  }

  if (num > 0) putchar('\n');

  return 0;
}
