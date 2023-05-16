#include <stdio.h>
int month;
int main()
{
	printf("enter your month:-");
	scanf("%d", &month);
	
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
	{
		printf("this month has 31 days.");
	}
	
	else if(month==4 || month==6 || month==9 || month==11)
	{
		printf("this month has 30 days.");
	}
	
	else if(month==2)
	{
		printf("this month has 28 or 29 days, depend on year.");
	}
	
	else
	{
		printf("there are only 12 months. So, your input is invalid");
	}
}
