#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mk_num(int*);
void print_high_low(int*);
void print_num(int*);

int main(void)
{
	int num1[4];

	mk_num(num1);

	printf("Number 1 = ");
	print_num(num1);

	printf("Number 1 HIGH&LOW = ");
	print_high_low(num1);
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

void print_high_low(int* num)
{
	while(*num)
	{
		if(*num<5)
		{
			printf("LOW ");
		}
		else
		{
			printf("HIGH ");
		}
		num++;
	}

	printf("\n");
}

void print_num(int* num)
{
	printf("%d%d%d\n",num[0],num[1],num[2]);
}
