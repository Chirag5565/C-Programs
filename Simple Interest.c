#include <stdio.h>
int main()
{
	int simpleinterest,p,r,n;
	
	printf("Enter the principal=\n");
	scanf("%d",&p);
	
	printf("Enter the rate=\n");
	scanf("%d",&r);
	
	printf("Enter the year=\n");
	scanf("%d",&n);
	
	simpleinterest=p*r*n/100;
	
	printf("The simple interest is %d",simpleinterest);
	
	return 0;
	
}
