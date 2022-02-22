#include <stdio.h>
int main()
{
	int noofrows,row,column;
	printf("Enter the number of rows\n");
	scanf("%d",&noofrows);
	
	for(row=1;row<=noofrows;row++)
	{
		for(column=1;column<=row;column++)

			printf("* ");
			
		
		printf("\n");
}
	
	return 0;
}
