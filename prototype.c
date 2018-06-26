/**Super-mini calculator for and by gmappy... with love thanks ;) */
#include <stdio.h>
#include <string.h>

int	main()
{
	int loose = 0;
	char choice;
	
/** Addition */
	int addition;
	int addition1;
	int sum_addition;
	
/** Multiplication */
	int times;
	int times1;
	int sum_times;
	
/** Division */	
	int divide;
	int divide1;
	float sum_divide;
	
/** Subtraction */
	int minus;
	int minus1;
	int sum_minus;
	
/** Make-shift Log-In */
	char name[15];
	
	printf("\tPlease enter username below:\n");
	scanf("%s",name);
	printf("\tWelcome:%s\n",name);
/** End of Make-shift Log-In */	
	
	printf("Please choose desired arithmetic symbol\n");
	printf("\ta - Addition\n");
	printf("\tb - Mutliplication\n");
	printf("\tc - Division\n");
	printf("\td - Subtraction\n");
	choice = getc(stdin);
	getc(stdin);
	
/** I'm pretty sure you get how this works, pretty simple really */

	if(choice == 1)
	{
		printf("Please enter two intergers\n");
		scanf("%d",addition);
		scanf("%d",addition1);
		
		sum_addition = addition + addition1;
		
		printf("%d",sum_addition);
	}
}
	

	else if(choice == 'b')
	{
		printf("Please enter two integers\n");
		scanf("%d",times);
		scanf("%d",times1);
		
		sum_times = times * times1;
		
		printf("%d",sum_times);
	}
	else if(choice == 'c')
	{
		printf("Please enter two intergers\n");
		scanf("%d",divide);
		scanf("%d",divide1);
		
		sum_divide = divide / divide1;
		
		printf("%f",sum_divide);
	}
	else if(choice == 'd')
	{
		printf("Please enter two intergers\n");
		scanf("%d",minus);
		scanf("%d",minus1);
		
		sum_minus = minus - minus1;
		
		printf("%d",sum_minus);
	}

	return 0;
}	
