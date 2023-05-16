#include <stdio.h>
int a,b;
int main() {
	 
	printf("enter a number, a:-");
	scanf("%d",&a);
	
	printf("enter a number, b:-");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("a is greater than b");
	}
	
	if(a<b)
	{
		printf("a is less than b");
	}
	
	if(a=b)
	{
		printf("a is equal to b");
	}
	return 0;
}
