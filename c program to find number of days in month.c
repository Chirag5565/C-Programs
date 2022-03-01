#include <stdio.h>
int main()
{
	char a;
	printf("Enter the month number\n");
	scanf("%c",&a);
	
	switch (a)
	{
		case 'January':
		case 'March':
		case 'May':
		case 'July':
		case 'August':
		case 'October':
		case 'December':
			printf("31 days\n");
			break;
			case 'February':
				printf("28/29 days\n");
				break;
				case 'April':
				case 'June':
				case 'September':
				case 'November':
					printf("30 days\n");
					break;
					default:
						printf("You have entered wrong month name\n");
						
	}
	return 0;
	
}
