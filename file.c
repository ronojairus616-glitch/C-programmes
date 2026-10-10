#include <stdio.h>
/*
NAME: KIPYEGON JAIRIS
REG NO.: BCS-05-0210/2026
DATE: 10/10/2026
 */

int calculateTotal(int mark1, int mark2, int mark3){
	int total;
	total = mark1 + mark2 + mark3;
	return total;
}
float calculateAverage(int total){
	float average;
	average = total/3.0;
	return average;	
}

void displayResult(float average){
	if(average >= 50){
		printf("Result: Pass\n");
		
	}
	else
	{
		printf("Result: Fail");
	}
}

int main()
{	int mark1, mark2, mark3, total;
	float average;
	printf("Enter marks for three subjects\n");
	scanf("%d%d%d", &mark1, &mark2, &mark3);
	
	total = calculateTotal(mark1, mark2, mark3);
	average = calculateAverage(total);
	
	printf("Total marks: %d\n", total);
	printf("Average mark: %.2f\n", average);
	
	displayResult(average);
	return 0;
}