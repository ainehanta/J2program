#include <stdio.h>

void matrix_add(int[][2],int[][2]);
void matrix_disp(int[][2]);

int main(void)
{
	int a[2][2] = {{ 1, 4},
	               { 5,-3}};
	int b[2][2] = {{-1, 6},
			       { 0, 5}};

	matrix_add(a,b);
	matrix_disp(a);

	return 0;
}

void matrix_add(int a[][2],int b[][2])
{
	int x,y;

	for(y=0;y<2;y++)
	{
		for(x=0;x<2;x++)
		{
			a[y][x] += b[y][x];
		}
	}
}

void matrix_disp(int a[][2])
{
	int x,y;

	for(y=0;y<2;y++)
	{
		for(x=0;x<2;x++)
		{
			printf("%3d",a[y][x]);
		}
		printf("\n");
	}
}
