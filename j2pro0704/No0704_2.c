#include <stdio.h>

void decode(int,char*);
void encode(int,char*);

int main(void)
{
	char plaintext[80] = "kotoshimoatui";
	int key;

	printf("input key = "); scanf("%d",&key);

	encode(key,plaintext);

	printf("output    = %s\n",plaintext);

	decode(key,plaintext);

	printf("%s\n",plaintext);

	return 0;
}

void decode(int key,char *text)
{
	int i;

	key %= 26;

	for(i=0;text[i]!='\0';i++)
	{
		if(text[i]-key<'a')
		{
			text[i] = text[i]-key+26;
		}
		else
		{
			text[i] -= key;
		}
	}
}

void encode(int key,char *text)
{
	int i;

	key %= 26;

	for(i=0;text[i]!='\0';i++)
	{
		if(text[i]+key>'z')
		{
			text[i] = text[i]+key-26;
		}
		else
		{
			text[i] += key;
		}
	}
}
