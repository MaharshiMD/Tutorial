#include <stdio.h>
int percentage;
int main()
{
	printf("enter your percentage:-");
	scanf("%d",&percentage);
	
	
	if(percentage>=80)
	{
		printf("congratulation you are passed in distinct class");
	}
	
	if(percentage>=70)
	{
		printf("congratulation you are passed in first class");
	}
	
	if(percentage>=60)
	{
		printf("congratulation you are passed in second class");
	}
	
	if(percentage>=50)
	{
		printf("congratulation you are passed in pass class");
	}
	return 0;
}