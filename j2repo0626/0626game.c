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
		printf("�ץ쥤�䡼�Ϳ� : "); scanf("%d",&player);
		if(player<0)
		{
			printf("���顼:���������ǡ�\n");
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
				printf("���򡪥ץ쥤�䡼%d�ξ�����\n",player_count);
				flag++;
			}
			else if(input < ans)
			{
				printf("�����Ϥ�ä��礭���Ǥ���\n");
			}
			else if(input > ans)
			{
				printf("�����Ϥ�äȾ������Ǥ���\n");
			}

			player_count++;
		}
		else
		{
			printf("���顼:%d����%d�ޤǤ����Ϥ��Ƥ���������\n",MIN,MAX);
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
