#include <stdio.h>
int main()
{
	int physics=55,chemistry=66,biology=77,maths=66,computer=88;
	float per;
	printf("%d the marks for physics\n",physics);
	printf("%d the marks for chemistry\n",chemistry);
	printf("%d the marks for biology\n",biology);
	printf("%d the marks for maths\n",maths);
	printf("%d the marks for computer\n",computer);
	
	per=(55+66+77+66+88)/5.0;
	
	if(per>=90)
	{
		printf("Grade A\n");
		
	}
	else
	if(per>=80)
	{
		printf("Grade B\n");
		
	}
	else
	if(per>=70)
	{
		printf("Grade C\n");
		
	}
	else
	if(per>=60)
	{
		printf("Grade D\n");
		
	}
	else
	if(per>=40)
	{
		printf("Grade E\n");
		
	}
	else
	{
		printf("Grade F\n");
		
	}

	
	return 0;
	
}
