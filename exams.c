#include <stdio.h>
/*
Author: KIPYRGON JAIRUS
REG NO.: BCS-05-0210/2026
Date: 25/09/2026
*/

int main(){
	int Unit1, Unit2, Unit3, attendance, averageMarks;
	printf("\n--Eligibility for exams test--\n");
	printf("Enter marks for three units: \n");
	printf("Unit 1: \t");
	scanf("%d", &Unit1);
	printf("Unit 2: \t");
	scanf("%d", &Unit2);
	printf("Unit 3: \t");
	scanf("%d", &Unit3);
	
	averageMarks = (Unit1 + Unit2 + Unit3)/3;
	
	printf("Enter the percentage of class attendance: \t");
	scanf("%d", &attendance);
	
	if(attendance >= 75 &&averageMarks >= 40){
		printf("You are eligible for exams.");
	}
	else
	{
		printf("Not eligible");
	}
	
	
	
	
}