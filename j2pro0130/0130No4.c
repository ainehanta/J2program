#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NONE 0
#define BOMB 1

void init_bomb(int field[][10]);
void print_field(int field[][10]);
void calc_hint(int field[][10],int hint [][10]);
int get_hint(int field[][10],int x,int y);

int main(void)
{
	int field[10][10];

	init_bomb(field);
	print_field(field);

	return 0;
}

void print_field(int field[][10])
{
	int x,y;

	for(y=0;y<10;y++)
	{
		for(x=0;x<10;x++)
		{
			switch(field[y][x])
			{
				case NONE : printf("¡¡"); break;
				case BOMB : printf("¡ü"); break;
			}
		}
		printf("\n");
	}
}

void init_bomb(int field[][10])
{
	int x,y;
	int count = 0;
	int flag = 0;

	for(y=0;y<10;y++)
	{
		for(x=0;x<10;x++)
		{
			field[y][x] = 0;
		}
	}

	do
	{
		for(y=0;y<10;y++)
		{
			if(flag==1)
			{
				break;
			}
			for(x=0;x<10;x++)
			{
				if(count>=10)
				{
					flag = 1;
					break;
				}
				if(rand()%10<1)
				{
					field[y][x] = BOMB;
					count++;
				}
			}
		}
	}while(count<10);
}

void calc_hint(int field[][10],int hint[][10])
{
}

int get_hint(int field[][10],int x,int y)
{
	int hint = 0;
	if(x==0&&y==0)
	{
		hint = field[0][1] +
			   field[1][0] +
			   field[1][1];
	}
	else if(x==0&&y==9)
	{
		hint = field[8][0] +
			   field[8][1] +
			   field[9][1];
	}
	else if(x==9&&y==0)
	{
		hint = field[0][8] +
			   field[1][8] +
			   field[1][9];
	}
	else if(x==9&&y==9)
	{
		hint = field[8][8] +
			   field[8][9] +
			   field[9][8];
	}
	else if(x==0)
	{
		hint = field[y-1][0] +
			   field[y-1][1] +
			   field[y][1]   +
			   field[y+1][0] +
			   field[y+1][1];
	}
	else if(x==9)
	{
		hint = field[y-1][8] +
			   field[y-1][9] +
			   field[y][8]   +
			   field[y+1][8] +
			   field[y+1][9];
	}
	else if(y==0)
	{
		hint = field[0][x-1] +
			   field[0][x+1] +
			   field[1][x-1] +
			   field[1][x]   +
			   field[1][x+1];
	}
	else if(y==9)
	{
		hint = field[8][x-1] +
			   field[8][x]   +
			   field[8][x+1] +
			   field[9][x-1] +
			   field[9][x+1];
	}
	else
	{
		hint = field[y-1][x-1] +
			   field[y-1][x]   +
			   field[y-1][x+1] +
			   field[y][x-1]   +
			   field[y][x+1]   +
			   field[y+1]
	}
}
