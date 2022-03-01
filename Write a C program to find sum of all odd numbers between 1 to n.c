#include <stdio.h>
int main()
{
	int a,n,sum=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	
	for(a=1;a<=n;a+=2)
	{
		printf("Odd number");
		
		sum=sum+a;
		
	}
	printf("Sum of odd numbers=%d\n",sum);
	
	return 0;
}
