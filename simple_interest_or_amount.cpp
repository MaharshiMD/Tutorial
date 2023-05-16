#include <stdio.h>
float principal, rate, days, simple_interest, amount;
int main()
{
	printf("enter your principal_amount:-");
	scanf("%f", &principal);
	
	printf("enter your rate of interest:-");
	scanf("%f", &rate);
	
	printf("enter the days:-");
	scanf("%f", &days);
	
	simple_interest=((principal*days*rate)/100)/365;
	amount=(principal+simple_interest);
	
	printf("simple_interest is %f \namount is %f", simple_interest, amount); 
}
