#include <stdio.h>
int a,b,c;
int main()
{
	printf("enter a value a:-");
	scanf("%d", &a);
	
	printf("enter a value b:-");
	scanf("%d", &b);
	
	printf("enter a value c:-");
	scanf("%d", &c);
	
	if(a==b && b==c)
	{
		printf("a,b,c all are equal values");
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
		printf("a,b,c are different values");
	}
}
