#include <stdio.h>

int main(void)
{
  int i;
  int v[5];

  int j = 5;
  for (i = 0; i < 5; i++)
      v[i] = j--;

  for (i = 0; i < 5; i++)
    printf("v[%d] = %d\n", i, v[i]);

  return 0;

}

// 位置No  = page + 19
