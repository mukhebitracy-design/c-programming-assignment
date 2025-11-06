 /*
NAME:TRACY NEKESA
REG NO:PA106/G/28737/25.
Description:A programme to keep tracks of books borrowed by the book titles
*/
#include <stdio.h>//Preproccesor directive


int main() {
    FILE *fptr;
    char book_title[100];  // Enough space for most titles

    // Open the file in append mode
    fptr = fopen("borrowed_books.txt", "a");
    if(fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
     }

    printf("Input the borrowed book title: \n");

    // Read the title (including spaces)
    fgets(book_title, sizeof(book_title), stdin);

   

    // Write to file
    fprintf(fptr, "%s\n", book_title);

    printf("The book has been recorded successfully.\n");

    fclose(fptr);
    return 0;
}
