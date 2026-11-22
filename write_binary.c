#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char name[50];
	char reg_no[50];
	float total_marks;
};
int main()
{
	FILE *fp;
	
	//sample students' data
	
	struct Student students[]{
	{
		"Alice Wanjiku", "BCS-03-0213/2026", 89.43
	},
	{
		"Faith Nanjala", "BCS-09-7543/2026", 78.87
	},
	{
		"John Thee Baptist", "Bcs-6545-345/2026", 100.22
	}
};

int count = sizeof(students)/sizeof(students[0]);
	fp = fopen("C:\\Users\\pc\\Desktop\\FILES\\results.dat", "wb");
	
	if(fp == NULL){
		printf("There was an error in opennimng the file path.\n");
		exit(1);
	}
	
	fwrite(students, sizeof(struct Student), count, fp);
	
	printf("Successfully written records %d records to 'results.dat'.\n", count);
	fclose(fp);
	return 0;
}