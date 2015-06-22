#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void decode(int,char*);
unsigned int encode(char*);

int main(void)
{
	char text[80] = "";
	unsigned int key;

	printf("input string >"); scanf("%s",text);

	key = encode(text);

	printf("output key   > %d\n",key);
	printf("output string> %s\n",text);

	return 0;
}

void decode(int key,char *text)
{
	srand(key);

	int i,count,rnd,flag;
	char table[52];
	char tmp;

	for(i=0;i<26;i++)
		table[i] = i+'A';
	for(i=0;i<26;i++)
		table[i+26] = i+'a';

	for(i=0;i<52;i++)
	{
		rnd = rand()%52;
		tmp = table[i];
		table[i] = table[rnd];
		table[rnd] = tmp;
	}

	for(i=0;text[i]!='\0';i++)
	{
		for(count=0;count<52;count++)
		{
			if(text[i]==table[count])
			{
				if(count>=0&&count<26)
				{
					text[i] = count + 'A';
				}
				else if(count>=26&&count<52)
				{
					text[i] = count + 'a' - 26;
				}

				break;
			}
		}
	}
}

unsigned int encode(char *text)
{
	unsigned int seed = (unsigned)time(NULL);

	srand(seed);

	int i,rnd;
	char table[52];
	char tmp;

	for(i=0;i<26;i++)
		table[i] = i+'A';
	for(i=0;i<26;i++)
		table[i+26] = i+'a';

	for(i=0;i<52;i++)
	{
		rnd = rand()%52;
		tmp = table[i];
		table[i] = table[rnd];
		table[rnd] = tmp;
	}

	for(i=0;text[i]!='\0';i++)
	{
		if(text[i]>='A'&&text[i]<='Z')
		{
			text[i] = table[text[i]-'A'];
		}
		else if(text[i]>='a'&&text[i]<='z')
		{
			text[i] = table[text[i]-'a'+26];
		}
	}


	return seed;
}
