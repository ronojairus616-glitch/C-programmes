#include <stdio.h>
/*
Author: Jairus Kipyegon Rono
Reg number: BCS-05-0210/2026
Description: Height, Bank balance and phone number input.
Date: 14th Sep 2026
Version 1*/

int main() {
	float height;
    double bank_balance;
    char phone_number[15];
    printf("What is your height in meters? \t");
    scanf("%f", &height);
    printf("What is your bank balance in KSH? \t");
    scanf("%lf", &bank_balance);
    printf("What is your phone number? \t ");
    scanf("%10s", &phone_number);
    printf(" Your height is %.2f meters\n Your bank balance in KSH is %.2f\n Your phone number is %s.\n", height, bank_balance, phone_number);
    return 0;
}