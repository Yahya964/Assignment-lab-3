#include <stdio.h>
int main()
{
	int Principle;
	float Rate_interest;
	int Time_period;
	int interest;
	printf(" enter principle :");
	scanf("%d",&Principle);
	while ((Principle<100) || (Principle>1000000))
	{
		printf(" wrong principle value entered :");
		scanf("%d",&Principle);
	} 
	printf(" enter rate interest :");
	scanf("%f",&Rate_interest);
	while ((Rate_interest<5) || (Rate_interest>10))
	{
		printf(" enter rate interest again :");
		scanf("%d",&Rate_interest);
	} 
	printf(" enter time period :");
	scanf("%d",&Time_period);
	while ((Time_period<1) || (Time_period>10))
	{
		printf(" enter time period again :");
		scanf("%d",&Time_period);
	} 
	Rate_interest=Rate_interest/100;
	interest=Principle*Rate_interest*Time_period;
	printf(" The interest is %d",interest);
	return 0;	
}