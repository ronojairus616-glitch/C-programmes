#include <stdio.h>
/*AUTHOR: KIPYEGON JAIRUS
REG NO. BCS-05-0210/2026
DATE: 10/10/2026
*/

float calculataFare(float distance_traveled){
	float totalKSH;
	totalKSH = 50 * distance_traveled;
	return totalKSH;
}

int main()
{
	float totalKSH, distance_travelled;
	printf("Enter distance travelled in KM: \t");
	scanf("%f", &distance_travelled);
	
	totalKSH = calculataFare(distance_travelled);
	
	printf("Total amount to pay = KSH.%.2f", totalKSH);
	
	
	
	return 0;
}