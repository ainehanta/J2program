#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct player
{
	int no;
	int hp;
	int mp;
	double at;
	double de;
} player;

player* mk_player(void);
void print_player(player*);
void write_players(FILE*,player**,int);

int main(void)
{
	int i;
	int tmp[80];
	int flag;
	player* players[3];
	FILE* fp = NULL;

	fp = fopen("players.txt","w");
	if(fp==NULL)
	{
		printf("Error\n");
		exit(1);
	}

	printf("No\tHP\tMP\tAT\tDE\t\n");

	for(i=0;i<3;i++)
	{
		players[i] = mk_player();
		print_player(players[i]);
	}

	printf("Save? (y,n) : "); scanf("%s",tmp);

	if(tmp[0] != 'n')
	{
		write_players(fp,players,3);
	}

	fclose(fp);
}

player* mk_player(void)
{
	static int flag = 0;

	if(flag == 0)
	{
		srand((unsigned)time(NULL));
	}

	player *p;
	p = (player*)malloc(sizeof(player));

	p->no = flag+1;
	p->hp = rand()%100+1;
	p->mp = rand()%100+1;
	p->at = rand()%100/100.0;
	p->de = rand()%100/100.0;

	flag++;

	return p;
}

void print_player(player* p)
{
	printf("%d\t%d\t%d\t%.2f\t%5.2f\n",p->no,p->hp,p->mp,p->at,p->de);
}

void write_players(FILE* fp,player** players,int length)
{
	int i;
	if(fp == NULL)
	{
		return;
	}

	fprintf(fp,"No\tHP\tMP\tAT\tDE\t\n");

	for(i=0;i<length;i++)
	{
		fprintf(fp,"%d\t%d\t%d\t%.2f\t%5.2f\n",(*(players+i))->no,(*(players+i))->hp,(*(players+i))->mp,(*(players+i))->at,(*(players+i))->de);
	}
}
