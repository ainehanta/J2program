#include <stdio.h>
#include <stdlib.h>

#define NUM 10

void initialize(int*);
void disp_array(int*);
void bubble_sort(int*);
void swap(int*,int*);

int comp_i = 0;
int swap_i = 0;

int main(void)
{
  int array[NUM];

  initialize(array);
  disp_array(array);
  bubble_sort(array);
  disp_array(array);

  printf("comp : %d\nswap : %d\n",comp_i,swap_i);

  return 0;
}

void initialize(int* array)
{
  int i;
  srand(0);

  for(i=0;i<NUM;i++)
  {
    array[i] = rand()%100;
  }
}

void disp_array(int* array)
{
  int i;

  for(i=0;i<NUM;i++)
  {
    printf("%d : %d\n",i,array[i]);
  }
  printf("\n");
}

void bubble_sort(int* array)
{
  int i,j;

  comp_i = 0;
  swap_i = 0;

  for(i=0;i<NUM-1;i++)
  {
    for(j=NUM-1;j>i;j--)
    {
      comp_i++;
      if(array[j]<array[j-1])
      {
	swap(&array[j],&array[j-1]);
	swap_i++;
      }
    }
  }
}

void swap(int* a,int* b)
{
  int tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}
