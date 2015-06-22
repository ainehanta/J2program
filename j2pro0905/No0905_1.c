#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 20

void set_random_alphabet(char str[]);
void disp_str(const char str[]);
char my_toupper(char c);
int count_alphabet(char str[],char ch);

int main(void)
{
	char str[NUM+1];
	char ch;
	int count;

	srand((unsigned)time(NULL));

	set_random_alphabet(str);

	disp_str(str);

	printf("Input:"); ch = getchar();

	count = count_alphabet(str,ch);
	printf("count=%d\n",count);

	disp_str(str);

	return 0;
}

void set_random_alphabet(char str[])
{
	int i;

	for(i=0;i<NUM;i++)
	{
		str[i] = 'a'+rand()%26;
	}

	str[i] = '\0';
}

void disp_str(const char str[])
{
	int i;

	i = 0;
	while(str[i]!='\0')
	{
		printf("%c",str[i]);
		i++;
	}

	printf("\n");
}

char my_toupper(char c)
{
	return c-'a'+'A';
}

int count_alphabet(char str[],char ch)
{
	int count=0;
	int i;

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			count++;
			str[i] = my_toupper(str[i]);
		}
	}

	return count;
}

