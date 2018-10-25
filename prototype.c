#include <stdio.h>
#include <unistd.h>

int main()
{
	char name[20];

	int i;
	int d1,d2;
	int total;


	printf("\tPlease enter username\n");
	scanf("\t%s",&name);
	printf("\t Welcome %s, Please Choose desired arithmetic sign below\n");

	printf("\t1 - Addition\n");
	printf("\t2 - Subtraction\n");
	scanf("\t%d",&i);

	if (i == 1)
	{
		printf("\tPlease enter first digit\n");
		scanf("\t%d",&d1);
		printf("\tPlease enter second digit\n");
		scanf("\t%d",&d2);

		total = (d1 + d2);

		printf("\tResult = %d",total);
	}
	else if (i == 2)
	{
		 printf("\tPlease enter first digit\n");
 24                 scanf("\t%d",&d1);
 25                 printf("\tPlease enter second digit\n");
 26                 scanf("\t%d",&d2);
 27
 28                 total = (d1 - d2);
	}
	return 0;
}
