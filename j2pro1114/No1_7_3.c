#include <stdio.h>

int main(void)
{
	int n[2];
	n[0] = 3;
	n[1] = 4;

	int *y;
	y = &n[0];

	printf("%d\n",n[1]);
	printf("%d\n",*(y+1));
	printf("%d\n",*(&n[0]+1));

	int **z;
	z = &y;

	printf("%d\n",*(*z+1));
}
