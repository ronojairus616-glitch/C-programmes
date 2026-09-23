/*
Program to compute discount 
ammount>=10000, 10% discount
below 5000, n0 dicount
*/
#include <stdio.h>

int main(){
	float amount, discount, amount_to_pay;
	
	printf("Enter the amount purchased \t");
	scanf("%f", &amount);
	
	if(amount>=10000){
		discount = 0.1 * amount;
		amount_to_pay = amount - discount;
				printf("Discount allowed: %.2f \n", discount);
			printf("Amount to pay: %.2f \n", amount_to_pay);
		
		}
		else if(amount >=5000 &&amount){
			discount = 0.05 * amount;
			amount_to_pay = amount - discount;
			printf("Discount = %.2f \n", discount);
			printf("Amount to pay = %.2f \n", amount_to_pay);
			}
			else
			{
				printf("No discount");
			};
			return 0;

		
	
	
}