#include <stdio.h>
#include <stdlib.h>

FILE *filePointer;


void addBook();

typedef struct
{
    int ISBN;
    char title_author[40];
    char author[15];
} book;

void main()
{
    addBook();
}

void addBook()
{
    filePointer = fopen("book.txt", "a");
    // int ISBN;
    // char title[50];
    // char author[15];

    book b1;
    printf("Enter ISBN number \n");
    scanf("%i",&b1.ISBN);
    printf("Enter title \n");
    fgets(b1.title_author, sizeof(b1.title_author), stdin);
    printf("Enter author \n");
    fgets(b1.author, sizeof(b1.author), stdin);

    fprintf(filePointer,"Book ISBN %i Title_Author %s ",b1.ISBN, b1.author);

    // book b1;
    // printf("Enter ISBN number \n");
    // scanf("%i", &ISBN);
    // printf("Enter title \n");
    // scanf("%s",title);
    // printf("Enter author \n");
    // fgets("%s",author);
}

void deleteBook()
{
    int ISBN;
    printf("Enter ISBN of the book to delete");
    scanf("%i",&ISBN);


    printf("Delete");
}