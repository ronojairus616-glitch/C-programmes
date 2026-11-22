#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char name[50];
	char reg_no[50];
	float total_marks;
};
int main(){

		struct Student student1;
		
		FILE *fp;
		
		fp = fopen("C:\\Users\\pc\\Desktop\\FILES\\results.dat","rb");
		
		if(fp == NULL){
			printf("There was an error in openning the file path.\n");
			exit(1);
		}
		
		printf("Student's examination results.\n");
		printf("-------------------------------\n");
		printf("%-25s %s\n", "Name", "Total marks");
		printf("---------------------------------\n");
		
		while(fread(&student1, sizeof(struct Student), 1, fp) == 1){
		printf("%-25s %.2f\n", student1.name, student1.total_marks);
		}
		fclose(fp);
	return 0;
}

