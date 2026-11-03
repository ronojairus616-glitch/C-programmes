#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	FILE *fptr;
	char book_title[100];
	
	fptr = fopen("C:\\Users\\pc\\Desktop\\FILES\\borrowed_books.txt","a");
	if(fptr == NULL){
		printf("Error in opening the file.\n");
		exit(1);
	}
	printf("Enter the title of the book borrowed: \t");
	fgets(book_title, sizeof(book_title), stdin);
	
	book_title[strcspn(book_title, "\n")] = '\0';
	
	fprintf(fptr, "%s\n", book_title);
	
	fclose(fptr);
	
	printf("Success! The book title has been successfully stored. \n");
	return 0;
}