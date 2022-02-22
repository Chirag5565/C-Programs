#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	
	switch(a>b)
	{
		case 0:
			printf("The %d number is maximum",b);
			break;
			case 1:
				printf("The %d number is maximum",a);
				break;
				
	}
	
	return 0;
}
