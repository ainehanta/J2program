#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mk_num(int*);
int get_slash(int*);
void print_num(int*);

int main(void)
{
	int num1[4];

	mk_num(num1);

	printf("Number 1 = ");
	print_num(num1);

	printf("Number 1 SLASH = %d\n",get_slash(num1));
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

int get_slash(int* num)
{
	int high,low;
	int i;
	high = low = 0;

	high = *num;
	for(i=0;i<3;i++)
	{
		if(high<*(num+i))
		{
			high = *(num+i);
		}
	}

	low = *num;
	for(i=0;i<3;i++)
	{
		if(low>*(num+i))
		{
			low = *(num+i);
		}
	}

	printf("HIGH = %d,LOW = %d\n",high,low);

	return high - low;
}

void print_num(int* num)
{
	printf("%d%d%d\n",num[0],num[1],num[2]);
}
