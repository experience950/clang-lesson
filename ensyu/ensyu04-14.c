#include <stdio.h>

int main(void)
{
  int num, i;
  int display = 1;

  printf("正の整数を入力してください：");
  scanf("%d", &num);

  for (i = 0; i < num; i++) {
    if (display == 10) display = 0;
    printf("%d", display++);
  }

  putchar('\n');

  return 0;
}
