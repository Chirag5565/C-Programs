#include <stdio.h>
int main()
{
	char a;
	
	printf("Enter the character=\n");
	scanf("%c",&a);
	
	
	if(a>=65 && a<=90)
	{
		printf("Uppercase");
		
	}
	else
	{
		printf("Lowercase");
		
	}
	if(a>=48 && a<=57)
	{
		printf("Digit");
		
	}
	else
	{
		printf("Special Symbol");
		
	}


	return 0;
	
}
