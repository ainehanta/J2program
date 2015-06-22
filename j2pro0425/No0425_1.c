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
			case 0 : printf("¿åÍË"); break;
			case 1 : printf("ÌÚÍË"); break;
			case 2 : printf("¶âÍË"); break;
			case 3 : printf("ÅÚÍË"); break;
			case 4 : printf("ÆüÍË"); break;
			case 5 : printf("·îÍË"); break;
			case 6 : printf("²ÐÍË"); break;
		}

		printf("\n");
	}

	return 0;
}
