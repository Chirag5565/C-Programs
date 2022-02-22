#include <stdio.h>
int main()
{
	int sidea,sideb,sidec;
	printf("Enter three sides\n");
	scanf("%d%d%d",&sidea,&sideb,&sidec);
	
	if(sidea==sideb && sideb==sidec && sidea==sidec)
	{
		printf("Equilateral Triangle\n");
		
	}
	else
	if(sidea==sideb || sideb==sidec || sidea==sidec)
	{
		printf("Isoceles Triangle\n");
		
	}
	else
	{
		printf("Scalene Triangle\n");	
	}
	
	return 0;
}
