#include <stdio.h>

int main(void)
{
  int min, max, step, i;

  printf("何cmから："); scanf("%d", &min);
  printf("何cmまで："); scanf("%d", &max);
  printf("何cmごと："); scanf("%d", &step);

  for (i = min; i <= max; i += step)
    printf("%dcm %.2f\n", i, (i - 100) * 0.9);

  return 0;
}

// 112
// page + 19 = 位置No
