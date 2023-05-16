#include <stdio.h>
int age;
int main()
{
	printf("enter your age:-");
	scanf("%d",&age);
	
	if(age>=18 && age<20)
	{
		printf("you are eligible for vote.");
	}
	
	else if(age>=20 && age<30)
	{
		printf("you are eligible for license.");
	}
	
	else if(age>=30)
	{
		printf("you are eligible for pan-card.");
	}
	
	else
	{
		printf("you are under 18. So, you are not eligible.");
	}
}
