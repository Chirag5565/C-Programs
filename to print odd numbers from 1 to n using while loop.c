#include <stdio.h>
int main()
{
	int a,n=1;
	printf("Enter number\n");
	scanf("%d",&n);
	
	printf("Enter the number from 1 to %d\n",n);
	while(a<=n)
	{
		if(a%2!=0)
		
		printf("Odd number=%d\n",a);
		a++;
	}
	
	return 0;
	
}
