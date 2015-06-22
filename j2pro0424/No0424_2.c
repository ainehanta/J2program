#include <stdio.h>
int main(void)
{
	int result[5][5];
	int tmp[25];
	int x,y,i;

	tmp[0] = 1;
	tmp[1] = 1;

	for(i=0;i<23;i++)
	{
		tmp[i+2] = tmp[i] + tmp[i+1];
	}

	i = 0;
	for(y=0;y<5;y++)
	{
		for(x=0;x<5;x++)
		{
			result[y][x] = tmp[i];
			printf(" %5d",result[y][x]);
			i++;
		}
		printf("\n");
	}
}
