#include <stdio.h>

int main(void)
{
  int num;
  int i, j;

  printf("num=");
  scanf("%d", &num);

  i = 0;
  while (i<num) {
    j = i;
    while (j>=0) {
      printf("*");
      j--;
    }
    printf("\n");
    i++;
  }


  return 0;
}
