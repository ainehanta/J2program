#include <stdio.h>

int main(void)
{
	int ten[10] = {0};
	int i,t;

	for(;;)
	{
		for(i=0;i<10;i++)
		{
			for(;;)
			{
				printf("%d����\t:",i+1); scanf("%d",&ten[i]);

				if(ten[i]<0)
				{
					i = -1;
					break;
				}
				else if(ten[i]<=100)
				break;
				else
				printf("0~100�δ֤����Ϥ��Ƥ�������\n");

			}

			if(i<0)
			break;

			t += ten[i];
		}
	
		if(i<0)
		break;

		printf("ʿ��\t:%d��\n",t/10);
	}

	return 0;
}
