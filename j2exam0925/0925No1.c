#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mk_rand_array(int*);
int add_array(int*,int,int);

void print_array(int*);

int main(void)
{
	int array[10];
	int n = 0,m = 0;

	srand((unsigned)time(NULL));

	mk_rand_array(array);

	printf("n ~ m : "); scanf("%d%d",&n,&m);

	printf("add n to m : %d\n",add_array(array,n,m));

	return 0;
}

void mk_rand_array(int* array)
{
	int i;

	for(i=0;i<10;i++)
	{
		array[i] = (rand()%10)+1;
	}

	print_array(array);
}

int add_array(int* array,int n,int m)
{
	int result = 0;
	int  i;

	for(i=n;i<=m;i++)
	{
		result += array[i];
	}

	return result;
}

void print_array(int* array)
{
	int i;

	for(i=0;i<10;i++)
	{
		printf("array[%2d] = %d\n",i,array[i]);
	}
}
