#include <stdio.h>
/*
Author: KIPYRGON JAIRUS
Reg no.: BCS-05-0210/2026
Date:24/09/2026
*/
int main(){
	int age;
	float annual_income;
	
	printf("Enter your age: \t");
	scanf("%d", &age);
	
	printf("Enter your annual income. \t");
	scanf("%f", &annual_income);
	
	if(age >= 21 &&annual_income >= 21000){
		printf("Congratulations you qualify for a loan. \n");
	}
	else
	{
		printf("Unfortunately, we are unable to offer you a loan at this time.");
	}
	return 0;
}