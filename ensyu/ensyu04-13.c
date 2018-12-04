#include <stdio.h>

int main(void)
{
  int num, i;
  int sum = 0;

  printf("nの値：");
  scanf("%d", &num);

  for (i = 0; i <= num; i++)
    sum += i;
  printf("1から%dまでの和は%dです。\n", num, sum);

  return 0;
}
