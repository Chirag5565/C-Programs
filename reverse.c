#include <stdio.h>
int main()
{
	int i,j,r;
	printf("Enter a number=\n");
	scanf("%d",&i);
	
	while(i>=1)
	{
		r=i%10;
		j=j*10+r;
		i=i/10;
		
	}
	
	printf("Reverse number=%d",j);
	
	
	return 0;
}
