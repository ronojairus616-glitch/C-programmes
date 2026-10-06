#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Author: KIPYEGON JAIRUS
Reg no. BCS-05-0210/2026
Date:  06/10/2026
*/
int main()
{
	int secretNumber, guess;
	int attempts = 0;
	
	srand(time(NULL));
	secretNumber = (rand() % 20) + 1;
	
	printf("Guess the secret number(1 - 20): \t");
	
	do{
		scanf("%d", &guess);
		attempts ++;
		
		if(guess > secretNumber){
			printf("Too high! \n");
		}
		else if(guess < secretNumber)
		{
			printf("Too low \n");
			
		}
		else
		{
			printf("Congratulations!");
			
		}
		
		if(guess != secretNumber){
			printf("Try agin!");
		}
	}while (guess != secretNumber);
	return 0;
}