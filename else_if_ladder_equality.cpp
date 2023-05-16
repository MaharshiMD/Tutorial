#include <stdio.h>
int a,b,c;
int main()
{
	printf("enter a:-");
	scanf("%d",&a);
	
	printf("enter b:-");
	scanf("%d",&b);
	
	printf("enter c:-");
	scanf("%d",&c);
	
	if(a==b && b==c)
	{
		printf("a,b,c all are equal");
	}
	
	else if(a==b)
	{
		printf("a is equal to b");
	}
	
	else if(b==c)
	{
		printf("b is equal to c");
	}
	
	else if(c==a)
	{
		printf("c is equal to a");
	}
	
	else
	{
		printf("all are different");
	}	
}
