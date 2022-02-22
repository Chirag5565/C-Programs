#include <stdio.h>
int main()
{
	int income,expenses;
	
	printf("Enter the income\n");
	scanf("%d",&income);
	
	printf("Enter the expenses\n");
	scanf("%d",&expenses);
	
	if(income>expenses)
	{
		printf("Profit");
		
	}
	else
	if(expenses>income)
	{
		printf("Loss");
		
	}
	else
	if(income==expenses)
	{
		printf("You are in no profit no loss condition");
		
	}
	
	return 0;

}
