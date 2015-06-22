#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void set_position(int*,int*);

int main(void)
{
	int player_x,player_y;
	player_x = player_y = 0;

	printf("player_x = %d\n",player_x);
	printf("player_y = %d\n",player_y);

	printf("°ÜÆ°\n");

	set_position(&player_x,&player_y);

	printf("player_x = %d\n",player_x);
	printf("player_y = %d\n",player_y);

	return 0;
}

void set_position(int* player_x,int* player_y)
{
	static flag = 0;
	if(flag == 0)
	{
		srand((unsigned)time(NULL));
		flag++;
	}

	*player_x = rand()%8;
	*player_y = rand()%8;
}
