#include <stdio.h>

int pay_money(int);

int main(void)
{
	int tmp;
	int result = 0;

	for(;;)
	{
		printf("input = "); scanf("%d",&tmp);

		if(tmp != 0)
		{
			if(tmp>0)
			{
				result += tmp;
			}
			else
			{
				printf("error\n");
			}
		}
		else
		{
			break;
		}
	}

	printf("\ntotal = %d\n",pay_money(result));

	return 0;
}

int pay_money(int total)
{
	if(total>=3000)
	{
		total -= 200;
	}
	else if(total>=1000)
	{
		total -= 100;
	}

	return total;
}
