#include <stdio.h>

int pay_money(int total);

int main(void)
{
	int i;

	for(;;)
	{
		printf("��� : "); scanf("%d",&i);

		if(i<0)
			break;

		printf("��� : %d\n",pay_money(i));
	}

		return 0;
}

int pay_money(int total)
{
	if(total>=10000)
	{
		total -= 3000;
	}
	else if(total>200)
	{
		total -= 200;
	}

	return total;
}
