#include <stdio.h>
/*
Author: Jairus Kipyegon Rono
Reg number: BCS-05-0210/2026
Description: Height, Bank balance and phone number input.
Date: 14th Sep 2026
Version 1*/

int main(){
	float height;
	double bank_balance;
	char phone_number[10];
	
	printf("What is your height in meters? \t");
	scanf("%f", &height);
	printf("What is your bank balance? \t");
	scanf("%lf", &bank_balance);
	printf("What is your phone number? \t");
	scanf("%s", &phone_number);
	
	printf("Your height is %.2f \n", height);
	printf("Your bank balance is %.2lf \n", bank_balance);
	printf("Your phone number is %s \n", phone_number);
	return 0;
}