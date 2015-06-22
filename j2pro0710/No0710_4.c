#include <stdio.h>

int main(void)
{
	int max,ch1_i,ch2_i,flag,count;
	char ch1[80];
	char ch2[80];

	printf("input string 1 > ");
	fflush(stdout);
	scanf("%s",ch1);

	printf("input string 2 > ");
	fflush(stdout);
	scanf("%s",ch2);

	for(max=0;ch2[max]!='\0';max++);

	flag=0;
	count = 0;

	for(ch1_i=0,ch2_i=0;ch1[ch1_i]!='\0';ch1_i++)
	{
		if(ch1[ch1_i] == ch2[0])
		{
			for(ch2_i=0;ch2[ch2_i]!='\0';ch2_i++)
			{
				if(ch2[ch2_i]==ch1[ch1_i+ch2_i])
				{
					count++;
				}
				else
				{
					count--;
				}

				if(count == max)
				{
					flag = 1;
					break;
				}
			}
		}
	}

	if(flag==1)
	{
		printf("含まれている\n");
	}
	else
	{
		printf("含まれていない\n");
	}

	return 0;
}
