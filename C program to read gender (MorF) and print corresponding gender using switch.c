#include <stdio.h>
int main()
{
	char a;
	printf("Enter the character\n");
	scanf("%c",&a);
	
	switch (a)
	{
		case 'M':
			printf("Male\n");
			break;
			case 'F':
				printf("Female\n");
				break;
				default:
					printf("You have entered wrong character\n");
					
					
	}
	
	return 0;
}
