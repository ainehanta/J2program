#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 10000

void initialize(int*);
void disp_array(int*);
void sort(int*);
void bubble_sort(int*);
void swap(int*,int*);

int swap_i = 0;
int comp_i = 0;

int main(void)
{
  int array[NUM];

  int start,stop;
  double st_time;
  double bub_time;

  printf("Start : Staright Selection Sort...\n\n");
  initialize(array);
  disp_array(array);
  start = clock();
  sort(array);
  stop = clock();
  disp_array(array);
  st_time = (double)(stop-start)/CLOCKS_PER_SEC;

  printf("Start : Bubble Sort...\n");
  initialize(array);
  disp_array(array);
  start = clock();
  bubble_sort(array);
  stop = clock();
  disp_array(array);
  bub_time = (double)(stop-start)/CLOCKS_PER_SEC;

  printf("Details : Straight Selection > %fsec\n",st_time);
  printf("Details : Bubble Sort > %fsec\n",bub_time);

  if(st_time<bub_time)
  {
    printf("Win : Straight Selection Sort\n");
  }
  else if(st_time>bub_time)
  {
    printf("Win : Bubble Sort\n");
  }
  else
  {
    printf("Win : Both\n");
  }

  return 0;
}

void initialize(int* array)
{
  int i;
  srand(0);

  for(i=0;i<NUM;i++)
  {
    array[i] = rand()%NUM;
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
