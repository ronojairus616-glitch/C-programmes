#include <stdio.h>
#include <stdlib.h>

void saveStudent();
void displayStudennts();
void addStudent();
int main(int argc, char** argv)
{

	saveStudent();	
	displayStudennts();
	addStudent();
	displayStudennts();
	return 0;
}

void saveStudent(){
	FILE *fptr;
	char name[50];
	char adm_no[50];
	char course[50];
	
	fptr = fopen("C:\\Users\\pc\\Desktop\\FILES\\students.txt", "w");
	
	if(fptr == NULL){
		printf("Error in openning the file path.\n");
		exit(0);
	}
	
	printf("Enter student's full name: \t");
	fgets(name, sizeof(name), stdin);
	
	printf("Enter student's admission number: \t");
	fgets(adm_no, sizeof(adm_no), stdin);
	
	printf("Enter student's course: \t");
	fgets(course, sizeof(course), stdin);
	
	fprintf(fptr, "Full name: %s\nAdmission number: %s\nCourse: %s\n", name, adm_no, course);
	
	printf("Studet's information successfully written to file.\n");
	
	fclose(fptr);
}

void displayStudennts(){
	printf("========================================\n");
		FILE *fptr;
		int ch;
	
	fptr = fopen("C:\\Users\\pc\\Desktop\\FILES\\students.txt", "r");
	
	if(fptr == NULL){
		printf("Error in openning the file path.\n");
		exit(0);
	}
	
	while((ch = getc(fptr)) != EOF){
		putchar(ch);
		
	}
		printf("========================================\n");
	printf("File successfully read.\n");
	
	fclose(fptr);
	
}

void addStudent(){
	FILE *fptr;
	char name[50];
	char adm_no[50];
	char course[50];
	
	fptr = fopen("C:\\Users\\pc\\Desktop\\FILES\\students.txt", "a");
	
	if(fptr == NULL){
		printf("Error in openning the file path.\n");
		exit(0);
	}
	
	printf("Enter student's full name: \t");
	fgets(name, sizeof(name), stdin);
	
	printf("Enter student's admission number: \t");
	fgets(adm_no, sizeof(adm_no), stdin);
	
	printf("Enter student's course: \t");
	fgets(course, sizeof(course), stdin);
	
	fprintf(fptr, "Full name: %s\nAdmission number: %s\nCourse: %s\n", name, adm_no, course);
	
	printf("Student's information successfully added to file.\n");
	
	fclose(fptr);
}