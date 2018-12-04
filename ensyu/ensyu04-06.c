/* No.96 > List 3-9 p.50 */

#include <stdio.h>

int main(void)
{
  int i, no;

  printf("正の整数を入力してください：");
  scanf("%d", &no);

  i = 2;
  while (i <= no) {
    if (i % 2 == 0)
      printf("%d ", i);
    i++;
  }
  printf("\n");

  return 0;
}
