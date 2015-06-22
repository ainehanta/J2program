#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 99
#define MIN 0

int mkrand(int min, int max)
{
	static int count = 0;

	if(count == 0)
	{
		srand((unsigned)time(NULL));
		count++;
	}

	return rand()%(max-min+1)+min;
}

int main(void)
{
	int ans = mkrand(MIN,MAX);
	int input = 0;
	int flag = 0;
	int player = 0;
	int player_count = 1;

	for(;;)
	{
		printf("プレイヤー人数 : "); scanf("%d",&player);
		if(player<0)
		{
			printf("エラー:正の整数で！\n");
		}
		else
			break;
	}

	for(flag=0;;)
	{
		printf("input P%d>",player_count); scanf("%d",&input);

		printf("message  >");

		if(input <= MAX && input >= MIN)
		{
			if(input == ans)
			{
				printf("正解！プレイヤー%dの勝利！\n",player_count);
				flag++;
			}
			else if(input < ans)
			{
				printf("答えはもっと大きいです。\n");
			}
			else if(input > ans)
			{
				printf("答えはもっと小さいです。\n");
			}

			player_count++;
		}
		else
		{
			printf("エラー:%dから%dまでで入力してください。\n",MIN,MAX);
		}

		if(player_count == player+1)
		{
			player_count = 1;
		}

		if(flag>0)
			break;
	}

	return 0;

}
