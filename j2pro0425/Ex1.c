#include <stdio.h>

#define WALL	1
#define SPACE	0
#define HUM	2
#define GOAL	3
#define START   4

void printmap(void);

int cap_x = 10;
int cap_y = 10;

char key;

int map[cap_x][cap_y] = {1,1,1,1,1,1,1,1,1,1,
			 1,1,1,1,1,1,1,1,1,1,
			 1,1,1,1,1,1,1,1,1,1,
			 1,1,1,1,1,1,1,1,1,1,
			 1,1,1,1,1,1,1,1,1,1,
			 1,1,1,1,1,1,1,1,1,1,
			 1,1,1,1,1,1,1,1,1,1,
			 1,0,0,0,0,0,0,0,0,3,
			 1,0,1,1,1,1,1,1,1,1,
			 4,0,1,1,1,1,1,1,1,1};

int main(void)
{
	for(;;)
	{
		printmap();

		
	}
}

void printmap()
{
	int x,y;

	system("clear");

	for(y=0;y<cap_y;y++)
	{
		for(x=0;x<cap_x;x++)
		{
			switch(map[y][x])
			{
				case START  : printf("S");  break;
				case GOAL   : printf("G");  break;
				case SPACAE : printf("¡¡"); break;
				case WALL   : printf("¢£"); break;
				case HUM    : printf("¿Í"); break;
			}
		}
		printf("\n");
	}
}
	
