#include <stdio.h>
/*AUTHOR: KIPYEGON JAIRUS
REG NO. BCS-05-0210/2026
DATE: 10/10/2026
*/


float convertToCelcius(float F){
	float C;
	C = (F-32)*5/9;
	return C; 
}
int main()
{
	float C, F;
	printf("Enter temperature in Fahrenheit: \t");
	scanf("%f", &F);
	
	C = convertToCelcius(F);
	
	printf("Temperate in degrees celcius = %.1f", C);
	return 0;
}