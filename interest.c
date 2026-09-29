#include <stdio.h>
#include <math.h>
/*
AUTHOR: KIPYEGON JAIRUS
REG NO.:
DATE:
Description: Simple & Compound interest calculator
*/
int main(){
 double principle, rate, time, interest, amount;   
 int type_of_interest;
 printf("Enter principle: \t");
    scanf("%lf", &principle);
    
    printf("Enter rate: \t");
    scanf("%lf", &rate);

    printf("Eneter time in years: \t");
    scanf("%lf", &time);

    printf("Type of interest (choose 1 or 2): \n 1. Simple interest. \n 2. Compound interest. \n");
    scanf("%d", &type_of_interest);

    if(type_of_interest == 1){
        interest = (principle * rate * time)/100;
        amount = principle + interest;
         printf("Total amount to pay = KSH.%.2lf \n", amount);
    printf("Interest = KSH.%.2lf", interest);
    }
    else if (type_of_interest == 2){
	              amount = principle * pow(1 + rate/100, time);
        interest = amount - principle;
         printf("Total amount to pay = KSH.%.2lf \n", amount);
    printf("Interest = KSH.%.2lf", interest);
    }
    else
	{
		printf("Invalid choice \n");
	}
   
    return 0;


}