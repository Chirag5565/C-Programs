#include <stdio.h>
int main()
{
	char i;
	printf("Enter the character=\n");
	scanf("%c",&i);
	
	if(i=='a' || i=='e'|| i=='i' || i=='o' || i=='u' ||
	i=='A' || i=='E' || i=='O' || i=='U')
	{
		printf("Vowel");
	}
	else
	{
		printf("Not Vowel");
	}
	
	return 0;
	
}
