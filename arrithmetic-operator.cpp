#include <stdio.h>
float a,b;

int main()
{	
	printf("enter number a:-");
	scanf("%f",&a);
	
	printf("enter number b:-");
	scanf("%f",&b);
	
	printf("addition of a and b is %f\n",a+b);
	printf("subtraction of a and b is %f\n",a-b);
	printf("division of a and b is %f\n",a/b);
    	printf("multiplication of a and b is %f\n",a*b);
    	printf("percentage of a and b is %f",b*100/a);
		
	return 0;	
}
