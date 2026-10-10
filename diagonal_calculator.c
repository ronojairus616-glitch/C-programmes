#include <stdio.h>
#include <math.h>
/*
AUTHOR: KIPYEGON JAIRUS
REG NO. BSC-05-0210/2026
DATE:	10/10/2026
*/
int main()
{	//Declaration of variables
	float length,width, diagonal;
	
	//Prompting the user to enter length and width of the window
	printf("--Program to calculate the diogonal length of a rectangular window--\n");
	printf("Enter length: \t");
	scanf("%f", &length);
	printf("Enter width: \t");
	scanf("%f", &width);
	
	//Calculation of the diagonal using in built functions
	diagonal = sqrt(pow(length, 2) + pow(width, 2));
	
	
	
	printf("Length = %.2f \nWidth = %.2f \nDiagonal = %.2f\n", length, width, diagonal);
	
	
	/*The purpose of sqrt() in the program is to calculate the square root of the sum 
	of the squre of length and width respectively*/
	return 0;
}