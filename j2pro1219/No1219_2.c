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
void swap_parameter(parameter*,parameter*);
void copy_parameter(parameter*,parameter*);
void sort_players_by_hp(parameter*);
int comp_players_hp(parameter*,parameter*);

int main(void)
{
  parameter player[PLAYER];

  srand(1);

  initialize(player);

  disp_array(player);

  sort_players_by_hp(player);

  disp_array(player);

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

void sort_players_by_hp(parameter* players)
{
  int i,j;

  for(i=0;i<PLAYER-1;i++)
  {
    for(j=PLAYER-1;j>i;j--)
    {
      if(comp_players_hp(&players[j],&players[j-1])==1)
      {
		swap_parameter(&players[j],&players[j-1]);
      }
    }
  }
}

int comp_players_hp(parameter* player1,parameter* player2)
{
  int result = 0;

  printf("p1 %d,p2 %d\n",player1->hp,player2->hp);

  if(player1->hp > player2->hp)
  {
    result = 1;
  }
  else if(player1->hp < player2->hp)
  {
    result = -1;
  }

  printf("%d comp result\n",result);
  return result;
}

void swap_parameter(parameter* param1,parameter* param2)
{
  parameter tmp;

  copy_parameter(&tmp,param1);
  copy_parameter(param1,param2);
  copy_parameter(param2,&tmp);

  printf("swapped\n");
}

void copy_parameter(parameter* param1,parameter* param2)
{
  int i;

  param1->no = param2->no;

  param1->name[0] = param2->name[0];
  param1->name[1] = param2->name[1];
  param1->name[2] = param2->name[2];
  param1->name[3] = param2->name[3];
  param1->name[4] = param2->name[4];
  param1->name[5] = param2->name[5];
  param1->name[6] = param2->name[6];
  param1->name[7] = param2->name[7];

  param1->hp = param2->hp;
  param1->mp = param2->mp;
  param1->attack = param2->attack;
  param1->defence = param2->defence;
}
