#include <stdio.h>

int main()
{
	int password = 1234;
	int enteredPassword;
	
	printf("Enter password: \t");
	
	do{
		scanf("%d", &enteredPassword);
		
		if(enteredPassword != password){
			printf("Wrong password! Please try again.\n");
		}
		else
		{
			printf("Access granted. \n");
		}
	}while (enteredPassword != password);
	return 0;
}