#include <stdio.h>

int main(void)
{
	int day;

	for(;;)
	{
		printf("input\t:"); scanf("%d",&day);

		if(day<0)
			break;

		printf("output\t:");

		switch(day%7)
		{
			case 0 : printf("����"); break;
			case 1 : printf("����"); break;
			case 2 : printf("����"); break;
			case 3 : printf("����"); break;
			case 4 : printf("����"); break;
			case 5 : printf("����"); break;
			case 6 : printf("����"); break;
		}

		printf("\n");
	}

	return 0;
}
