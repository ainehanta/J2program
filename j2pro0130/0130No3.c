#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort_str(char*);
void print_str(char*);

int main(void)
{
	int i;
	char str[10];

	srand((unsigned)time(NULL));

	for(i=0;i<10;i++)
	{
		str[i] = rand()%26 + 'a';
	}

	print_str(str);
	sort_str(str);
	print_str(str);

	return 0;
}

void sort_str(char* str)
{
	int i,j;
	char tmp;

	for(i=0;i<10;i++)
	{
		for(j=10-1;j>i;j--)
		{
			if(str[j]<str[j-1])
			{
				tmp = str[j];
				str[j] = str[j-1];
				str[j-1] = tmp;
			}
		}
	}
}

void print_str(char* str)
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
}
