#include <stdio.h>

int main(void)
{
	char ch;
	char* ch_p;
	int itgr;
	int *itgr_p;
	double fl;
	double* fl_p;

	printf("char\t= %u byte\n",(unsigned)sizeof(ch));
	printf("char*\t= %u byte\n",(unsigned)sizeof(ch_p));
	printf("int\t= %u byte\n",(unsigned)sizeof(itgr));
	printf("int*\t= %u byte\n",(unsigned)sizeof(itgr_p));
	printf("double\t= %u byte\n",(unsigned)sizeof(fl));
	printf("double*\t= %u byte\n",(unsigned)sizeof(fl_p));

	return 0;
}
