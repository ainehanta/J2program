#include <stdio.h>

void cto2(unsigned char num);

int main(void)
{
  unsigned char num;
  int shift;
  int i;

  for(;;)
  {
     printf("input : "); scanf("%d",&shift);

     if(shift >= 0 && shift <= 7)
     {

       num = 1;

       for(i=0;i<shift;i++)
       {
         num = num<<1;
       }

       cto2(num);
     }
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


  
