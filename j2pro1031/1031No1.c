#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_user(int*,int*,int*,int*,int*);

int main(void)
{
	int str,agi,dex,luc,hp;
	init_user(&str,&agi,&dex,&luc,&hp);

	printf("str = %d\nagi = %d\ndex = %d\nluc = %d\nhp = %d\n",str,agi,dex,luc,hp);

	return 0;
}

void init_user(int* str,int* agi,int* dex,int* luc,int* hp)
{
	static int srand_flag = 0;
	if(srand_flag==0)
	{
		srand((unsigned)time(NULL));
	}

	*str = rand()%100+1;
	*agi = rand()%100+1;
	*dex = rand()%100+1;
	*luc = rand()%100+1;
	*hp 	= rand()%11+20;
}
