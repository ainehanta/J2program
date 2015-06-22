#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mk_num(int*);
void comp_num(int*,int*);
void print_num(int*);

int main(void)
{
	int num1[4];
	int num2[4];

	mk_num(num1);

	printf("Number 1 = ");
	print_num(num1);

	printf("\n");

	printf("input num2 : "); scanf("%d%d%d",&num2[0],&num2[1],&num2[2]);
	num2[3] = '\0';

	printf("\n");

	comp_num(num1,num2);

	printf("\n");
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

void comp_num(int* num1,int* num2)
{
	int eat,bite;
	int i,tmp;

	eat = bite = 0;

	for(i=0;i<3;i++)
	{
		for(tmp=0;tmp<3;tmp++)
		{
			if(num1[i]==num2[tmp])
			{
				bite++;
				break;
			}
		}
	}

	for(i=0;i<3;i++)
	{
		if(num1[i]==num2[i])
		{
			bite--;
			eat++;
		}
	}

	printf("%dEAT-%dBITE\n",eat,bite);
}

void print_num(int* num)
{
	printf("%d%d%d\n",num[0],num[1],num[2]);
}
