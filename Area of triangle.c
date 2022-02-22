#include <stdio.h>
int main()
{
	int base,height,area;
	
	printf("Enter the base=\n");
	scanf("%d",&base);
	
	printf("Enter the height=\n");
	scanf("%d",&height);
	
	area=base*height/2;
	
	printf("The area of triangle is %d",area);
	
	return 0;
	
}
