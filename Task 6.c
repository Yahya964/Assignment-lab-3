#include <stdio.h>
int main()
{
	float X1;
	float Y1;
	float Y2;
	float X2;
	float Slope_Value; 
	
	printf(" enter the first x coordinate ");
	scanf("%f",&X1);
	printf(" enter the first y coordinate ");
	scanf("%f",&Y1);
	printf(" enter the second y coordinate ");
	scanf("%f",&Y2);
	printf(" enter the second x co0rdinate ");
	scanf("%f",&X2);
	Slope_Value=((Y2-Y1)/(X2-X1));
	printf(" slope is %.3f ",Slope_Value);
	return 0;
	
}
