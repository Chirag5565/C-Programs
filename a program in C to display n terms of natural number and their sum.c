#include <stdio.h>
int main()
{
	int a,n,sum=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	
	printf("The first %d natural numbers are\n",n);
	
	for(a=1;a<=n;a++)
	{
		printf("%d\n",a);
		sum=sum+a;
		
	}
	
	printf("The sum of natural numbers are%d\n",n,sum);
	
	return 0;
	
	
}
