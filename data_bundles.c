#include <stdio.h>

int main(){
	int choice;
	printf("Select data bundle: \n 1. 100MB @ 50 KES \n 2. 500MB @ 200 KES \n 3. 1GB  @ 300 KES \n 4. 2GB @ 600 KES \n");
	
	printf("Enter your choice: \t");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("You have selected the 100MB bundle for 50 KES.\n");
        break;
    case 2:
        printf("You have selected the 500MB bundle for 200 KES.\n");
        break;
    case 3:
        printf("You have selected the 1GB bundle for 300 KES.\n");
        break;
    case 4:
        printf("You have selected the 2GB bundle for 600 KES.\n");
        break;
    
    default:
        printf("Invalid choice.\n");        
        break;
    }

    return 0;
}