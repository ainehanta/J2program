#include <stdio.h>

void cut_mame(char*);

int main(void)
{
	char* string = "edamameedamameedamame";

	printf("%s\n",string);

	cut_mame(string);

	return 0;
}

void cut_mame(char* string)
{
	int result_i,string_i,cut_count;

	for(result_i=string_i=0;*(string+string_i)!='\0';)
	{
		for(cut_count=0;cut_count<3;cut_count++)
			printf("%c",*(string+string_i++));
		string_i += 4;
	}

	puts("");
}

