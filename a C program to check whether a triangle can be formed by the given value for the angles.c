#include <stdio.h>
int main()
{
	int angle1,angle2,angle3,tot;
	printf("Enter the three angles\n");
	scanf("%d%d%d",&angle1,&angle2,&angle3);
	
	tot=angle1+angle2+angle3;
	
	if(tot==180)
	{
		printf("The Triangle is formed\n");
		
	}
	else
	{
		printf("The Triangle is not formed\n");
		
	}
	
	return 0;

}
