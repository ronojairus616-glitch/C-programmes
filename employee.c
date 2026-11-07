#include <stdio.h>
#include <stdlib.h>

void writeEmployee();
void readEmployee();
void appendEmployee();
void readEmployee();

int main()
{
	writeEmployee();
	readEmployee();
	appendEmployee();
	readEmployee();
	return 0;
}

void writeEmployee(){
	FILE *fp;
	char id_no[50];
	char name[50];
	char department[50];
	
	fp = fopen("C:\\Users\\pc\\Desktop\\FILES\\employees.txt","w");
	
	if(fp == NULL){
		printf("Error in openning the file path.\n");
		exit(1);
	}
	printf("Enter employees full name: \t");
	fgets(name, sizeof(name), stdin);
	
	printf("Enter employee's identification number: \t");
	fgets(id_no, sizeof(id_no), stdin);
	
	printf("Enter employee's department: \t");
	fgets(department, sizeof(department), stdin);
	
	fprintf(fp, "Employee's full name: %s\nEmployee's identification number: %s\nEmployee's department: %s\n", name, id_no, department);

	printf("Informaton successfully written to file.\n");
	
	fclose(fp);
}

void readEmployee(){
	FILE *fp;
	int ch;
	
	
	fp = fopen("C:\\Users\\pc\\Desktop\\FILES\\employees.txt", "r");
	printf("========================================\n");
	if(fp == NULL){
		printf("Error in openning the file path.\n");
		exit(1);
	}	
	while((ch = getc(fp)) != EOF){
			putchar(ch);
	}
	printf("========================================\n");
		printf("File successfully read.\n");
	fclose(fp);
}

void appendEmployee(){
	FILE *fp;
	char id_no[50];
	char name[50];
	char department[50];
	
	fp = fopen("C:\\Users\\pc\\Desktop\\FILES\\employees.txt","a");
	
	if(fp == NULL){
		printf("Error in openning the file path.\n");
		exit(1);
	}
	printf("Enter employees full name: \t");
	fgets(name, sizeof(name), stdin);
	
	printf("Enter employee's identification number: \t");
	fgets(id_no, sizeof(id_no), stdin);
	
	printf("Enter employee's department: \t");
	fgets(department, sizeof(department), stdin);
	fprintf(fp, "---------------------------------------\n");
	fprintf(fp, "Employee's full name: %s\nEmployee's identification number: %s\nEmployee's department: %s\n", name, id_no, department);
	printf("Informaton successfully added to file.\n");
	
	fclose(fp);	
} 