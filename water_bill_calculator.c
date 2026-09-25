#include <stdio.h>
/*
Author: KIPYEGON JAIRUS
REG NO.: BCS-05-0120/2026
Date: 25/09/2026
*/

int main()
{
	printf( "\n --Water bill calculator-- \n");
	
	float units_consumed, KES_per_unit, total_water_bill;
	
	printf("Enter the number of water units consumed: \t");
	scanf("%f", &units_consumed);
	
	if(units_consumed <= 30){
	KES_per_unit = 20;
	}
	else if(units_consumed <= 60)
	{
		KES_per_unit = 25;
	} 
	else{
		KES_per_unit = 30;
	}
	total_water_bill = units_consumed * KES_per_unit;
	printf("Total water bill: %.2f KES", total_water_bill);
	return 0;
}