#include <stdio.h>

void decode(int,char*);
void encode(int,char*);

int main(void)
{
	char ciphertext[] = "uboptijjkvhzpvebob";

	decode(1,ciphertext);

	printf("output = %s\n",ciphertext);

	return 0;
}

void decode(int key,char *text)
{
	int i;

	for(i=0;text[i]!='\0';i++)
	{
		text[i] -= key;
	}
}

void encode(int key,char *text)
{
	int i;

	for(i=0;text[i]!='\0';i++)
	{
		text[i] += key;
	}
}
