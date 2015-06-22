#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char *trump[53] = {"Spade A",
			  "Spade 2",
			  "Spade 3",
			  "Spade 4",
			  "Spade 5",
			  "Spade 6",
			  "Spade 7",
			  "Spade 8",
			  "Spade 9",
			  "Spade 10",
			  "Spade J",
			  "Spade Q",
			  "Spade K",
			  "Diamond A",
			  "Diamond 2",
			  "Diamond 3",
			  "Diamond 4",
			  "Diamond 5",
			  "Diamond 6",
			  "Diamond 7",
			  "Diamond 8",
			  "Diamond 9",
			  "Diamond 10",
			  "Diamond J",
			  "Diamond Q",
			  "Diamond K",
			  "Clover A",
			  "Clover 2",
			  "Clover 3",
			  "Clover 4",
			  "Clover 5",
			  "Clover 6",
			  "Clover 7",
			  "Clover 8",
			  "Clover 9",
			  "Clover 10",
			  "Clover J",
			  "Clover Q",
			  "Clover K",
			  "Heart A",
			  "Heart 2",
			  "Heart 3",
			  "Heart 4",
			  "Heart 5",
			  "Heart 6",
			  "Heart 7",
			  "Heart 8",
			  "Heart 9",
			  "Heart 10",
			  "Heart J",
			  "Heart Q",
			  "Heart K",
			  "Jorker"
			 };

	srand((unsigned)time(NULL));

	int i,index;
	char *tmp;
	for(i=0;i<53;i++)
	{
		index = rand()%53;
		tmp = trump[i];
		trump[i] = trump[index];
		trump[index] = tmp;
	}

	for(i=0;i<53;i++)
	{
		printf("%s\n",trump[i]);
	}

	return 0;
}
