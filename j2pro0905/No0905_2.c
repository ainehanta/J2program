#include <stdio.h>

void gen_9_9(int[][9]);
void disp_matrix(int[][9]);

int main(void)
{
	int array[9][9];

	gen_9_9(array);
	disp_matrix(array);

	return 0;
}

void gen_9_9(int array[][9])
{
	int x,y;

	for(y=0;y<9;y++)
	{
		for(x=0;x<9;x++)
		{
			array[y][x] = (y+1)*(x+1);
		}
	}
}

void disp_matrix(int array[][9])
{
	int x,y;

	for(y=0;y<9;y++)
	{
		for(x=0;x<9;x++)
		{
			printf("%3d",array[y][x]);
		}
		printf("\n");
	}
}
