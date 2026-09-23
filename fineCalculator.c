#include <stdio.h>
/*
Author: KIPYEGON JAIRUS
Reg no.: BCS-05-0210/2026
Description: 
Date:23/09/2026
*/

int main(){
	float fineAmount, fineRate;
	int bookId, dueDate, returnDate;
	
	//input
	printf("Enter book id: \t");
	scanf("%d", &bookId);
	
	printf("Enter the due date: \t");
	scanf("%d", &dueDate);
	
	printf("Enter the return date: \t");
	scanf("%d", &returnDate);

	//Calculating days overdue
	int daysOverdue = returnDate - dueDate;
	
	//Determining fine rate
	if(daysOverdue <= 7){
		fineRate = 20;
		fineAmount = fineRate * daysOverdue;		
	} 
	else if(daysOverdue <= 14 &&daysOverdue){
		fineRate = 50;
		fineAmount = fineRate * daysOverdue;
	}
	 
	else{
		fineRate = 100;
		fineAmount = fineRate * daysOverdue;
	}
	
	//Output
	printf("-- Fine details--\n");
	printf("Book id: %d \n",bookId);
	printf("Due date: %d \n", dueDate);
	printf("Return date: %d \n", returnDate);
	printf("Days overdue: %d \n", daysOverdue);
	printf("Fine rate: %.2f \n", fineRate);
	printf("Fine amount: KSH %.2f \n", fineAmount);
	return 0;
	}