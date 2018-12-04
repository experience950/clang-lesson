/* No.96 > List 3-9 p.50 */

#include <stdio.h>

int main(void)
{
  int i, no;

  printf("正の整数を入力してください：");
  scanf("%d", &no);

  i = 1;
  while (i <= no)
    printf("%d ", i++);
  if (no > 0) printf("\n");

  return 0;
}
