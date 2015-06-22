#include <stdio.h>

char str_min(char*);

int main(void)
{
	char str[80];

	printf("input = "); scanf("%s",str);

	printf("%sのうち辞書順に一番小さいアルファベットは%cです。\n",str,str_min(str));

	return 0;
}

char str_min(char str[])
{
	char ret;
	int i;

	ret = str[0];

	for(i=1;str[i]!='\0';i++)
	{
		if(ret>str[i])
			ret = str[i];
	}

	return ret;
}
