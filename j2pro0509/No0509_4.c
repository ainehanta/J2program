#include <stdio.h>

void tenki_hantei(int kousui)
{
	printf("天気　　:");

	if(kousui>=0 && kousui<20)
	{
		printf("晴れ\n");
	}
	else if(kousui<50)
	{
		printf("曇り\n");
	}
	else if(kousui<=100)
	{
		printf("雨\n");
	}
	else
	{
		printf("0~100の間で入力してください\n");
	}
}

int main(void)
{
	int kousui;

	for(;;)
	{
		printf("降水確率:"); scanf("%d",&kousui);

		if(kousui<0)
		break;

		tenki_hantei(kousui);
	}

	return 0;
}
