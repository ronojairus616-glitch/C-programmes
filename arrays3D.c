//Hotel management system using 3D arrays
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
AUTHOR: KIPYEGON JAIRUS
REG NO.: BCS-05-0210-2026
DATE: 26/10/2026

*/
int main()
{
	int i, j, k, chain[3][5][10], occupied, vaccant;
	srand(time(0));
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			for(k=0;k<10;k++){
			chain[i][j][k] = rand()%2;
			}
		}
	}
	for(i=0;i<3;i++){
		occupied =0;
		vaccant = 0;
		for(j=0;j<5;j++){
			for(k=0;k<10;k++){
				if(chain[i][j][k] ==1){
					occupied ++;
					
				}
				else
				{
					vaccant ++;
				}
			}
		}
		printf("====Chain %d ====\n Vaccant: %d \n Occupied: %d\n ", i+1, vaccant, occupied );
	}	
	return 0;
}