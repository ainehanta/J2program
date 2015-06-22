#include <stdio.h>

void omikuji(int number)
{
	if(number == 1)
	{
		printf("大吉です！すごいね！\n");
	}
	else if(number == 2)
	{
		printf("吉です．やったー．\n");
	}
	else if(number == 3)
	{
		printf("末吉です．まあ，普通だね\n");
	}
	else
	{
		printf("１，２，３以外の数値が入力されました．\n");
		printf("１，２，３のどれかを入力してね．\n");
	}
}

int main(void)
{
	omikuji(1);

	return 0;
}
