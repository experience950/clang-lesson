/*
  p.67 演習
  List3-4 (p.45)
  List3.17(p.61)
*/

#include <stdio.h>

int main(void)
{
  int month;

  printf("何月ですか：");
  scanf("%d", &month);

  switch (month) {
    case 1  : printf("%d月は冬です。\n", month); break;
    case 2  : printf("%d月は冬です。\n", month); break;
    case 3  : printf("%d月は春です。\n", month); break;
    case 4  : printf("%d月は春です。\n", month); break;
    case 5  : printf("%d月は春です。\n", month); break;
    case 6  : printf("%d月は夏です。\n", month); break;
    case 7  : printf("%d月は夏です。\n", month); break;
    case 8  : printf("%d月は夏です。\n", month); break;
    case 9  : printf("%d月は秋です。\n", month); break;
    case 10 : printf("%d月は秋です。\n", month); break;
    case 11 : printf("%d月は秋です。\n", month); break;
    case 12 : printf("%d月は冬です。\n", month); break;
    default : printf("%d月はありませんよ！w\a\n", month); break;
  }

  return 0;
}
