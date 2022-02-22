#include <stdio.h>
int main()
{
	int a=1;
	
	printf("Enter the rows\n");
	scanf("%d",&a);
	
	while(a<10);
	{
		printf('*'*a);
		a+=1;
		
	}
	
	return 0;

	
	
}
