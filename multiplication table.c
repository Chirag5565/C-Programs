#include <stdio.h>
int main()
{
	int i,a;
	
	printf("Enter the number=\n");
	scanf("%d",&a);
	
	
	printf("Multiplication Table\n");
	
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",a,i,a*i);
		
	}
	
	return 0;
}
