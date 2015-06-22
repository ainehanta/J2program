#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PLAYER 10
#define NAME 8+1

void initialize(int*,char name[][NAME],int*,int*,double*,double*);
void disp_array(int*,char name[][NAME],int*,int*,double*,double*);

int main(void)
{
  int no[PLAYER];
  char name[PLAYER][NAME];
  int hp[PLAYER];
  int mp[PLAYER];
  double attack[PLAYER];
  double defence[PLAYER];

  srand(1);

  initialize(no,name,hp,mp,attack,defence);

  disp_array(no,name,hp,mp,attack,defence);

  return 0;
}

void initialize(int* no,char name[][NAME],int* hp,int* mp,double* attack,double* defence)
{
  int i,j;

  for(i=0;i<PLAYER;i++)
  {
    no[i] = i;
    for(j=0;j<NAME-1;j++)
    {
      name[i][j] = 'a' + rand()%26;
    }
  

    name[i][j] = '\0';
    hp[i] = rand()%100;
    mp[i] = rand()%100;
    attack[i] = (double)rand()/RAND_MAX;
    defence[i] = (double)rand()/RAND_MAX;
  }
}

void disp_array(int* no,char name[][NAME],int* hp,int* mp,double* attack,double* defence)
{
  int i;

  printf("No\tName\t\tHP\tMP\tAT\tDE\n");
  for(i=0;i<PLAYER;i++)
  {
    printf("[%2d]\t",no[i]);
    printf("%s\t",name[i]);
    printf("%2d\t%2d\t%.2f\t%.2f\n",hp[i],mp[i],attack[i],defence[i]);
  }
}
