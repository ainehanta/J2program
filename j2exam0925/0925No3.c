#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mov_ch_matrix(char[][10]);

void print_matrix(char[][10]);
void change_matrix(char[][10]);

int main(void)
{
	srand((unsigned)time(NULL));
	char matrix[2][10];

	mov_ch_matrix(matrix);
	print_matrix(matrix);

	printf("\n");

	change_matrix(matrix);
	print_matrix(matrix);

	return 0;
}

void mov_ch_matrix(char matrix[][10])
{
	int x,y;

	for(y=0;y<2;y++)
	{
		for(x=0;x<10;x++)
		{
			matrix[y][x] = rand()%26+'a';
		}
	}
}

void print_matrix(char matrix[][10])
{
	int x,y;

	for(y=0;y<2;y++)
	{
		for(x=0;x<10;x++)
		{
			printf(" %c ",matrix[y][x]);
		}
		printf("\n");
	}
}

void change_matrix(char matrix[][10])
{
	int x;
	char tmp;

	for(x=0;x<10;x++)
	{
		tmp = matrix[0][x];
		matrix[0][x] = matrix[1][x];
		matrix[1][x] = tmp;
	}
}
