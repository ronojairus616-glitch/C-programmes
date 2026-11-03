#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	FILE *fptr;
	double transactions;
	double total_sales = 0.0;
	
	fptr = fopen("C:\\Users\\pc\\Desktop\\FILES\\sales.txt","r");
	
	if(fptr == NULL){
		printf("Error in openning the file.\n");
		exit(0);
	}
	
while(fscanf(fptr, "%lf", &transactions)==1)
{
	total_sales += transactions;
}

printf("Total sales for the day: Sh.%.2lf \n", total_sales);

fclose(fptr);
	
	return 0;
}