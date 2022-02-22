#include <stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter the first number=\n");
	scanf("%d",&a);
	
	printf("Enter the second number=\n");
	scanf("%d",&b);
	
	printf("Enter the third number=\n");
	scanf("%d",&c);
	
	if(a>=b && a>c)
	{
		printf("%d is greater number",a);
		
	}
	if(b>=a && b>=c)
	{
		printf("%d is greater number",b);
		
	}
	if(c>=a && c>=b)
	{
		printf("%d is greater number",c);
		
	}
	
	return 0;
	
}
