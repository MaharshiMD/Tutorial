#include <stdio.h>
int a,b,c;
int main()
{
	printf("enter number a:-");
	scanf("%d", &a);
	
	printf("enter number b:-");
	scanf("%d", &b);
	
	printf("enter number c:-");
	scanf("%d", &c);
	
	if(c>b && c>a)
	{
		printf("c is greater");
	}
	
	if(b>a && b>c)
	{
		printf("b is greater");
	}
	
	if(a>b && a>c)
	{
		printf("a is greater");
	}
	
}
