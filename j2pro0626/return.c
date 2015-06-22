#include <stdio.h>

int main(void)
{
	int i;

	char str[80] = {'0'};
	int ch;

	for(i=0;(ch=getchar())!=EOF&&i<80-1;i++)
	{
		str[i] = ch;
	}

	printf("%s\n",str);
}
