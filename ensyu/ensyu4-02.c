/* No.96 > List 3-9 p.50 */

#include <stdio.h>

int main(void)
{
  int a, b;

  puts("二つの整数を入力してください。");
  printf(" 整数a：");  scanf("%d", &a);
  printf(" 整数b：");  scanf("%d", &b);

  int sum = 0;
  int min = (a < b) ? a : b;
  int max = (a > b) ? a : b;
  int cnt = min;

  do {
    sum = sum + cnt;
    cnt = cnt + 1;
  } while (cnt <= max);

  printf("%d以上%d以下の全整数の和は%dです。\n", min, max, sum);

  return 0;
}
