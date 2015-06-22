#include <stdio.h>

int main(void)
{
	char str[11] = {'0'};
	char result[11] = {'0'};
	char ch,dummy;
	int i1,i2;
	int count = 0;

	for(i1=0;i1<10;i1++)
	{
		printf("input = "); scanf("%c%c",&ch,&dummy);

		str[i1] = ch;
	}

	for(i1=0,i2=0;str[i1]!='\0';i1++)
	{
		if(str[i1]>='0' && str[i1]<='9')
		{
			count += (str[i1] - '0');
		}
		else
		{
			result[i2] = str[i1];
			i2++;
		}
	}

	printf("%s\n",result);
	printf("%d\n",count);

	return 0;
}
