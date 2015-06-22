#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mk_num(int*);
void print_num(int*);

int main(void)
{
	int num[4];

	mk_num(num);

	print_num(num);
}

void mk_num(int* num)
{
	static int init_flag = 0;
	if(init_flag == 0)
	{
		srand((unsigned)time(NULL));
		init_flag++;
	}

	num[0] = rand()%9+1;
	num[1] = rand()%9+1;
	num[2] = rand()%9+1;
	num[4] = '\0';
}

void print_num(int* num)
{
	printf("%d%d%d\n",num[0],num[1],num[2]);
}
