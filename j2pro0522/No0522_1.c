#include <stdio.h>

void cto2(unsigned char num);

int main(void)
{
  unsigned char num;
  int i;

  for(i=0;i<=255;i++)
  {
    num = (char)i;

    printf("%3d %3X ", num, num);
    cto2(num);
  }

  return 0;
}

void cto2(unsigned char num)
{
  int a[8];
  int i;

  for(i = 0; i < 8; i++){
    a[i] = 0;
  }
  
  for(i = 0; i < 8; i++) {
    a[i] = num % 2;
    num = num / 2;
  }

  for(i = 0; i < 8; i++) {
    printf("%d", a[7-i]);
  }

  printf("\n");
}


  
