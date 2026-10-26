//Weekly revenue tracker
#include <stdio.h>

int main(){
	int i, n=7; 
	float revenue[7], sum=0, average;
		printf("Enter daily revenue:\n");
	for(i=0;i<7;i++){
	printf("Day %d:\t", i+1);
		scanf("%f", &revenue[i]);
		
		sum += revenue[i];
	}
	average = sum/n;
	
	printf("Total weekly revenue = KSH.%.2f \nAverage daily revenue = KSH.%.2f", sum, average);
	
	return 0;
}
