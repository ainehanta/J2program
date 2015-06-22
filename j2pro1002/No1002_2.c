#include <stdio.h>

void manzyu_calc(int,int*,int*);

int main(void)
{
	int kosu,two,three;
	kosu = two = three = 0;

	printf("input > "); scanf("%d",&kosu);

	manzyu_calc(kosu,&two,&three);

	printf("2で割ったとき:%d\n",two);
	printf("3で割ったとき:%d\n",three);

	return 0;
}

void manzyu_calc(int kosu,int* two,int* three)
{
	*two = kosu / 2;
	*three = kosu / 3;
}
