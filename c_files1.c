#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr;
	char name[50];
	char reg_number[50];
	
	fptr = fopen("C:\\Users\\pc\\Desktop\\FILES\\student_details.txt","w");
	
	if(fptr == NULL){
		printf("Error in opening the file,\n");
		exit(1);
	} 
	
	printf("Enter your full name:\t");
	fgets(name, sizeof(name), stdin);
	
	printf("Enter your reg number:\t");
	fgets(reg_number, sizeof(reg_number), stdin);
	
	fprintf(fptr, "Name: \t%s\n", name);
	fprintf(fptr, "Reg number: \t%s\n", reg_number);
	
	fclose(fptr);
	
	printf("File written successfully.");
	
	return 0;
}