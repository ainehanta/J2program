#include <stdio.h>

void cto2(unsigned char num);

int main(void)
{
  unsigned char a = 0x2A;

  unsigned char  num;

  printf("2A��2�ӥåȥ��եȤ����Ȥ�����\n");
  num = a << 2;

  printf("%3d %3X ", num, num);
  cto2(num);

  printf("2A��1�ӥåȥ��եȤ����Ȥ�����\n");
  num = a >> 1;

  printf("%3d %3X ", num, num);
  cto2(num);

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


  
