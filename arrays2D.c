//Hotel management system using 2D arrays
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
/*
AUTHOR: KIPYEGON JAIRUS
REG NO.: BCS-05-0210/2026
DATE: 26/10/2026
DESCRIPTION: 2D ARRAYS
*/
	srand(time(0));
	int i, j, occupied, vaccant, occupancy[5][10];
	
	for(i=0;i<5;i++){
		for(j=0;j<10;j++){
			occupancy[i][j] = rand() %2 ;
		
		}
	}
	for(i=0;i<5;i++){
		vaccant = 0;
		occupied = 0;
		
		for(j=0;j<10;j++){
			if(occupancy[i][j] == 1){
				occupied ++;
			}
			else
			{
				vaccant ++;
			}
		}
		printf("Floor %d: Occupied = %d, Vacant = %d\n", i+1, occupied, vaccant);
	}
	return 0;
} 