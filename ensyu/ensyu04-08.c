#include <stdio.h>

int main(void)
{
  int no;

  printf("正の整数：");
  scanf("%d", &no);

  if (no > 0) {
    while (no-- > 0)
      putchar('*'); // 文字定数
    putchar('\n');
  }
  return 0;
}
