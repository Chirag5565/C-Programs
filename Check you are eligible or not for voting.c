#include <stdio.h>
int main()
{
	int i;
	
	printf("Enter your age\n",i);
	scanf("%d",&i);
	
	if(i>18 && i<=100)
	{
		printf("You are eligible for voting");
	}
	else
	{
		printf("You are not eligible for voting");
		
	}
	
}
