#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PLAYER 10
#define NAME 8+1

#define SORT_MODE_HIGH	1
#define SORT_MODE_LOW	2

#define SORT_BY_NO		1
#define SORT_BY_NAME	2
#define SORT_BY_HP		3
#define SORT_BY_MP		4
#define SORT_BY_ATTACK	5
#define SORT_BY_DEFENCE	6

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
void sort_players(int,int,parameter*);

int comp_players_no(parameter*,parameter*);
int comp_players_name(parameter*,parameter*);
int comp_players_hp(parameter*,parameter*);
int comp_players_mp(parameter*,parameter*);
int comp_players_attack(parameter*,parameter*);
int comp_players_defence(parameter*,parameter*);

int main(void)
{
  int sort_mode = 1;
  int sort_by = 1;

  parameter player[PLAYER];

  srand(1);

  initialize(player);

  printf("æ∫ΩÁ(1) or πﬂΩÁ?(2) : "); scanf("%d",&sort_mode); printf("mode : %d\n",sort_mode);
  printf("•Ω°º•»π‡Ã‹§Œ¡™¬Ú\n");
  printf("NO\t:\t1\n");
  printf("NAME\t:\t2\n");
  printf("HP\t:\t3\n");
  printf("MP\t:\t4\n");
  printf("ATTACK\t:\t5\n");
  printf("DEFENCE\t:\t6\n");
  printf("input : "); scanf("%d",&sort_by); printf("by : %d\n",sort_by);

  sort_players(sort_mode,sort_by,player);

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

void sort_players(int mode,int by,parameter* players)
{
  int i,j;
  int comp_result = 0;
  int comp_num = 1;

  if(mode==SORT_MODE_HIGH)
  {
	comp_num = -1;
  }
  else if(mode==SORT_MODE_LOW)
  {
	comp_num = 1;
  }
  else
  {
	printf("Error Mode\n");
	return;
  }

  for(i=0;i<PLAYER-1;i++)
  {
    for(j=PLAYER-1;j>i;j--)
    {
		switch(by)
		{
			case SORT_BY_NO			: comp_result = comp_players_no(&players[j],&players[j-1]); break;
			case SORT_BY_NAME		: comp_result = comp_players_name(&players[j],&players[j-1]); break;
			case SORT_BY_HP			: comp_result = comp_players_hp(&players[j],&players[j-1]); break;
			case SORT_BY_MP			: comp_result = comp_players_mp(&players[j],&players[j-1]); break;
			case SORT_BY_ATTACK		: comp_result = comp_players_attack(&players[j],&players[j-1]); break;
			case SORT_BY_DEFENCE	: comp_result = comp_players_defence(&players[j],&players[j-1]); break;
		}
      if(comp_result==comp_num)
      {
		swap_parameter(&players[j],&players[j-1]);
      }
    }
  }
}

int comp_players_no(parameter* player1,parameter* player2)
{
  int result = 0;

  if(player1->no > player2->no)
  {
    result = 1;
  }
  else if(player1->no < player2->no)
  {
    result = -1;
  }

  return result;
}

int comp_players_name(parameter* player1,parameter* player2)
{
  int result = 0;

  if(player1->name[0] > player2->name[0])
  {
    result = 1;
  }
  else if(player1->name[0] < player2->name[0])
  {
    result = -1;
  }

  return result;
}

int comp_players_hp(parameter* player1,parameter* player2)
{
  int result = 0;

  if(player1->hp > player2->hp)
  {
    result = 1;
  }
  else if(player1->hp < player2->hp)
  {
    result = -1;
  }

  return result;
}

int comp_players_mp(parameter* player1,parameter* player2)
{
  int result = 0;

  if(player1->mp > player2->mp)
  {
    result = 1;
  }
  else if(player1->mp < player2->mp)
  {
    result = -1;
  }

  return result;
}

int comp_players_attack(parameter* player1,parameter* player2)
{
  int result = 0;

  if(player1->attack > player2->attack)
  {
    result = 1;
  }
  else if(player1->attack < player2->attack)
  {
    result = -1;
  }

  return result;
}

int comp_players_defence(parameter* player1,parameter* player2)
{
  int result = 0;

  if(player1->defence > player2->defence)
  {
    result = 1;
  }
  else if(player1->defence < player2->defence)
  {
    result = -1;
  }

  return result;
}

void swap_parameter(parameter* param1,parameter* param2)
{
  parameter tmp;

  tmp = *param1;
  *param1 = *param2;
  *param2 = tmp;
}
