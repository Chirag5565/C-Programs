#include <stdio.h>
int main()
{
	int a;
	printf("Enter the number\n");
	scanf("%d",&a);
	
	switch (a%2==0)
	{
		case 0:
			printf("The number is odd\n");
			break;
			case 1:
				printf("The number is even\n");
				break;
	}
	
	return 0;
}
