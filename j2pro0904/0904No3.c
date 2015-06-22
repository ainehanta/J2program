#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STRING_LEN 100

void create_rand_str(char*);
void count_str(const char*);

int main(void)
{
	char str[STRING_LEN];

	create_rand_str(str);

	count_str(str);

	return 0;
}

void create_rand_str(char* str)
{
	int i;

	static int count = 0;
	if(count==0)
	{
		srand((unsigned)time(NULL));
		count++;
	}

	for(i=0;i<STRING_LEN;i++)
	{
		str[i] = rand()%26+'A';
	}
}

void count_str(const char* str)
{
	int i;
	int counter[26];

	for(i=0;i<26;i++)
	{
		counter[i] = 0;
	}

	for(i=0;i<STRING_LEN;i++)
	{
		counter[(str[i]-'A')%26]++;
	}

	for(i=0;i<26;i++)
	{
		printf("%c : %d\n",'A'+i,counter[i]);
	}
}
