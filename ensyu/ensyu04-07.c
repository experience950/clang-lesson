/* No.96 > List 3-9 p.50 */

#include <stdio.h>

int main(void)
{
  int i, no;

  printf("正の整数を入力してください：");
  scanf("%d", &no);

  i = 2;
  while (i <= no) {
    printf("%d ", i);
    i *= 2;
  }
  printf("\n");

  return 0;
}
