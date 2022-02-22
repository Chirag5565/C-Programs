#include <stdio.h>
int main()
{
	int temp;
	printf("Enter the temperature\n");
	scanf("%d",&temp);
	
	if(temp<0)
	{
	printf("Freezing Weather\n");
    }
	else
	if(temp>=0 && temp<10)
	{
	
	printf("Very Cold Weather\n");
    }
	else
	if(temp>=10 && temp<20)
	{
	printf("Cold Weather\n");
    }
	else
	if(temp>=20 && temp<30)
    {
	printf("Normal\n");
    }
	else
	if(temp>=30 && temp<40)
	{
	printf("Hot\n");
    }
	else
	if(temp>=40)
	{
	printf("It's Very Hot\n");
    }
    else
    {
    	printf("You have entered wrong temperature\n");
    	
	}
    
    return 0;
}
