#include <stdio.h>

void print_array(int,int);

int main(void)
{
	int x,y;

	printf("¹Ô:"); scanf("%d",&x);
	printf("Îó:"); scanf("%d",&y);

	print_array(x,y);

	return 0;
}

void print_array(int x,int y)
{

	int tmp_x,tmp_y;

	for(tmp_y=1;tmp_y<=y;tmp_y++)
	{
		for(tmp_x=1;tmp_x<=x;tmp_x++)
		{
			printf("%3d",tmp_x*tmp_y);
		}

		printf("\n");
	}
}
