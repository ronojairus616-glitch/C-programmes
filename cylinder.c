#include <stdio.h>
/*
Author: Jairus Kipyegon Rono
Reg number: BCS-05-0210/2026
Description: Calculating the volume and surface area of a cylinder.
Date: 19th Sep 2026
Version :*/
int main(){
	const double PI = 3.142;
	double radius;
	double height;
	double volume;
	double surface_area;
	printf("===Program to calculate volume and surface area of a cylinder===\n");
	printf("Enter radius: \t");
	scanf("%lf", &radius);
	printf("Enter height: \t");
	scanf("%lf", &height);
	
	volume = PI * radius * radius * height;
	surface_area = 2 * PI * radius * radius + 2 * PI * radius * height;
	
	printf("The volume is: %.2lf \n", volume);
	printf("The surface area is: %.2lf", surface_area);
	return 0; 
}