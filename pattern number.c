#include <stdio.h>
int main()
{
	int noofrow,row,column;
	printf("Enter the number of rows\n");
	scanf("%d",&noofrow);
	
	for(row=1;row<=noofrow;row++)
	{
		for(column=1;column<=row;column++)
		printf("%d",column);
		printf("\n");
		
	}
	
	return 0;
	
	
	
}
