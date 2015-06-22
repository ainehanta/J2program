#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int seed=0;
	int rnd;
	int i;
	char ch[80];
	char table[62];
	char tmp;

	printf("ID > "); scanf("%s",ch);

	for(i=0;ch[i]!='\0';i++)
	{
		seed += ch[i];
	}

	srand(seed);

	for(i=0;i<26;i++)
		table[i] = 'A' + i;

	for(i=0;i<26;i++)
		table[i+26] = 'a' + i;

	for(i=0;i<10;i++)
		table[i+52] = '0' + i;

	for(i=0;i<62;i++)
	{
		rnd = rand()%62;
		tmp = table[i];
		table[i] = table[rnd];
		table[rnd] = tmp;
	}

	for(i=0;i<8;i++)
	{
		ch[i] = table[i];
	}
	ch[i] = '\0';

	printf("%s\n",ch);
}
