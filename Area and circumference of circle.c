#include <stdio.h>
int main()
{
	int radius,circumference,area;
	float pi=3.14;
	
	printf("Enter the radius=\n");
	scanf("%d",&radius);
	
	area=pi*radius*radius;
	
	printf("Area of circle=%d\n",area);
	
	circumference=2*pi*radius;
	
	printf("Circumference of circle=%d\n",circumference);
	
	return 0;
}
