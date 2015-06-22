#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp = NULL;

	int array[10];
	int i;

	fp = fopen("data.txt","w");
	if(fp==NULL)
	{
		printf("ファイルのオープンに失敗しました\n");
		exit(1);
	}

	for(i=0;i<10;i++)
	{
		printf("input %d > ",i);
		scanf("%d",&array[i]);
	}

	for(i=0;i<10;i++)
	{
		fprintf(fp,"%d : %d\n",i,array[i]);
	}

	fclose(fp);

	return 0;
}
