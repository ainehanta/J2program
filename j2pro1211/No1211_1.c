#include <stdio.h>
#include <stdlib.h>

#define NUM 10

void initialize(int*);
void disp_array(int*);
void sort(int*);
void swap(int*,int*);

int swap_i = 0;
int comp_i = 0;

int main(void)
{
  int array[NUM];

  initialize(array);
  disp_array(array);
  sort(array);
  disp_array(array);

  printf("comp_i : %d\nswap_i : %d\n",comp_i,swap_i);
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

void sort(int* array)
{
  int i,j;

  swap_i = 0;
  comp_i = 0;

  int min_index;

  for(i=0;i<NUM-1;i++)
  {
    min_index = i;

    for(j=i+1;j<NUM;j++)
    {
      if(array[j]<array[min_index])
      {
	min_index = j;
      }
      comp_i++;
    }
    swap(&array[i],&array[min_index]);
    swap_i++;
  }
}

void swap(int* a,int* b)
{
  int tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}
