#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PLAYER 10
#define NAME 8+1

typedef struct parameter
{
  int no;
  char name[NAME];
  int hp;
  int mp;
  double attack;
  double defence;
} parameter;

void initialize(parameter*);
void disp_array(parameter*);
void disp_array_max_attach(parameter*);

int main(void)
{
  parameter player[PLAYER];

  srand(1);

  initialize(player);

  disp_array(player);

  printf("Max Attach Player :\n");

  disp_array_max_attach(player);

  return 0;
}

void initialize(parameter* player)
{
  int i,j;

  for(i=0;i<PLAYER;i++)
  {
    player[i].no = i;
    for(j=0;j<NAME-1;j++)
    {
      player[i].name[j] = 'a' + rand()%26;
    }
  

    player[i].name[j] = '\0';
    player[i].hp = rand()%100;
    player[i].mp = rand()%100;
    player[i].attack = (double)rand()/RAND_MAX;
    player[i].defence = (double)rand()/RAND_MAX;
  }
}

void disp_array(parameter* player)
{
  int i;

  printf("No\tName\t\tHP\tMP\tAT\tDE\n");
  for(i=0;i<PLAYER;i++)
  {
    printf("[%2d]\t",player[i].no);
    printf("%s\t",player[i].name);
    printf("%2d\t%2d\t%.2f\t%.2f\n",player[i].hp,player[i].mp,player[i].attack,player[i].defence);
  }
}

void disp_array_max_attach(parameter* player)
{
  int i;
  int max_index = 0;
  for(i=0;i<PLAYER;i++)
  {
    if(player[max_index].attack<player[i].attack)
    {
      max_index = i;
    }
  }

  i = max_index;
  printf("No\tName\t\tHP\tMP\tAT\tDE\n");
  printf("[%2d]\t",player[i].no);
  printf("%s\t",player[i].name);
  printf("%2d\t%2d\t%.2f\t%.2f\n",player[i].hp,player[i].mp,player[i].attack,player[i].defence);
}
