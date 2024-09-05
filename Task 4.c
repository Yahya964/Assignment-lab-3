#include <stdio.h>
int main()
{
    int Single_trip=1207;
	int Forward_fuel=118;
	int Backward_fuel=123;
	float Fuel_average;
	float forward_cost;
	float backward_cost;
	float Total_cost;
	float Total_fuel;
	printf(" what is your car fuel average : ");
	scanf("%f",&Fuel_average);
	if (Fuel_average>0)
	{
	    forward_cost=(Single_trip*Forward_fuel)/Fuel_average;
	    printf(" you forward cost is %f \n",forward_cost);
	    backward_cost=(Single_trip*Backward_fuel)/Fuel_average;
	    printf(" you backward cost is %f \n",backward_cost);
	    Total_cost=forward_cost+backward_cost;
	    printf(" total fuel cost is %f \n",Total_cost);
	    Total_fuel=(Single_trip*2)/Fuel_average;
	    printf(" total fuel average is %f",Total_fuel);
	    
	   
	    return 0;
	}
	else
	{
	    printf(" enter correct value ");
	}
	
}