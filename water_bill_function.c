#include <stdio.h>
/*
NAME: KIPYEGON JAIRIS
REG NO.: BCS-05-0210/2026
DATE: 10/10/2026
 */


float calculateElectricBill(float units){
	float total_bill, KSH_per_unit;
	
	if(units <= 100){
		KSH_per_unit = 10;
	}
	else if(units <= 200){
		KSH_per_unit = 15;
}
	else{
		KSH_per_unit=20;
}
total_bill = KSH_per_unit * units;
return total_bill;
	
}

int main()
{
	float total_bill, units;
	printf("Enter number of units consumed: \t");
	scanf("%f", &units);
	
	total_bill = calculateElectricBill(units);
	
	printf("Your total bill amount is KSH.%.2f\n", total_bill);
	 
	return 0;
}