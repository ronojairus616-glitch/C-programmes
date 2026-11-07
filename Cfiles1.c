//File handling
#include <stdio.h>
#include <stdlib.h>

//void writeToFile();
//void readFromFile();
void appendToFile();
void readFromFile();
int main()
{
//writeToFile();
 //readFromFile();
 appendToFile();	
	 readFromFile();
	return 0;
}

void writeToFile(){

	FILE *fp;
	char sentence[300];
	fp = fopen("C:\\Users\\pc\\Desktop\\FILES\\sample7.txt","w");
	
	if(fp == NULL){
		printf("Error in opening the file (path)\n");
		exit(1);
	}
	
	printf("Enter a paragraph \n");
	fgets(sentence, sizeof(sentence), stdin);
	//scanf, scanf(" %s ")
	fputs(sentence, fp);
	//fprintf(fp, "%s", sentence)

	printf("Paragraph successfully written to file.\n ");
	
	fclose(fp);
}

void readFromFile(){

		FILE *fp;
	char sentence[300];
	int ch;
	fp = fopen("C:\\Users\\pc\\Desktop\\FILES\\sample7.txt","r");
	
	if(fp == NULL){
		printf("Error in opening the file (path)\n");
		exit(1);
	}	
	
	//read from file null characters  \0 EOF
	
	while((ch = getc(fp)) != EOF)
	{
	
		putchar(ch);	
	}
	printf("File successfully read.\n");
	fclose(fp);
}
void appendToFile(){

		FILE *fp;
	char sentence[300];
	fp = fopen("C:\\Users\\pc\\Desktop\\FILES\\sample7.txt","a");
	
	if(fp == NULL){
		printf("Error in opening the file (path)\n");
		exit(1);
	}
	
	printf("Enter a paragraph \n");
	fgets(sentence, sizeof(sentence), stdin);
	//scanf, scanf(" %s ")
	fputs(sentence, fp);
	//fprintf(fp, "%s^[\n]", sentence)

	printf("Paragraph successfully written to file.\n ");
	
	fclose(fp);	
}