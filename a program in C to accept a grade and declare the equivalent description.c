#include <stdio.h>
int main()
{
	char a;
	
	printf("Enter the Grade\n");
	scanf("%c",&a);
	
	if(a=='E')
	{
		printf("Excellent\n");
		
	}
	else
	if(a=='V')
	{
		printf("Very Good\n");
		
	}
	else
	if(a=='G')
	{
		printf("Good\n");
		
	}
	else
	if(a=='A')
	{
	
	printf("Average\n");
    }
    else
    if(a=='F')
    {
    	printf("Fail\n");
    	
	}
	else
	{
		printf("You have entered wrong grade\n");
		
	}
	
	return 0;
	
}
