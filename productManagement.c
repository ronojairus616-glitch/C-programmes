#include <stdio.h>

struct Product
{
	int product_code;
	char product_name[20];
	float unitPrice;
	int quantity;
};
int main(){
	Product product1;
	
	printf("===Enter the following product details:===\n");
	
	printf("Name: \t");
	scanf("%s", &product1.product_name);
	
	printf("Product code: \t");
	scanf("%d", &product1.product_code);
	
	printf("Price: \t");
	scanf("%f", &product1.unitPrice);
	
	printf("Quantity: \t");
	scanf("%d", &product1.quantity);
	
	printf("=============================\n");
	printf("===Product details===\n");
	printf("Name: %s \n", product1.product_name);
	printf("Product code: %d \n", product1.product_code);
	printf("Unit price: %.2f \n", product1.unitPrice);
	printf("Quantity: %d \n", product1.quantity);
	printf("Total stock value: KSH.%.2f \n", product1.unitPrice * product1.quantity);
}