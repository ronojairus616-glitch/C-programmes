
#include <stdio.h>  // printf(), scanf(), fopen(), fprintf(), fclose()
#include <stdlib.h> // exit()

int main()
{
    FILE *fptr;
    char sentence[300];

    fptr = fopen("C:\\Users\\pc\\Desktop\\FILES\\sample2.txt", "w");

    if (fptr == NULL) {
        printf("Error opening the file.\n");
        exit(1);
    }

    printf("Enter a sentence/paragraph: ");
    //scanf("%d", &num);
    fgets(sentence, sizeof(sentence), stdin);
	    

    // Write to the file
    fprintf(fptr, "This is the sentence: %s \n", sentence);
//close the file
    fclose(fptr);
    
    printf("File written successfully");

    return 0;
}

