#include <stdio.h>
#include <stdlib.h>

// FILE *filePointer;

void addBook();
void deleteBook();
void searchBook();
void menu();

typedef struct
{
    int ISBN;
    char title_author[40];
    char author[15];
} book;

static book bks[5];
static int counter;

void main()
{
    menu();
}

void menu()
{
    int option;
    printf("1. for Add Book \n");
    printf("2. for deleting book \n");
    printf("3. for search book \n");
    printf("4. to exit \n");
    printf("Enter a number between 1 and 4 \n");
    scanf("%i", &option);
    switch (option)
    {
    case 1:
        addBook();
        break;
    case 2:
        deleteBook();
        break;
    case 3:
        searchBook();
        break;
    case 4:
        exit(0);
        break;

    default:
        break;
    }
}

void addBook()
{
    // filePointer = fopen("book.txt", "a");
    // int ISBN;
    // char title[50];
    // char author[15];
    book b1;
    printf("Enter ISBN number \n");
    scanf("%i", &b1.ISBN);
    printf("Enter title \n");
    fgets(b1.title_author, sizeof(b1.title_author), stdin);
    printf("Enter author \n");
    fgets(b1.author, sizeof(b1.author), stdin);

    // fprintf(filePointer, "Book ISBN %i Title_Author %s ", b1.ISBN, b1.author);

    // book b1;
    // printf("Enter ISBN number \n");
    // scanf("%i", &ISBN);
    // printf("Enter title \n");
    // scanf("%s",title);
    // printf("Enter author \n");
    // fgets("%s",author);

    for (int i = 0; i < 5; i++)
    {
        printf("Enter ISBN number \n");
        scanf("%i", &bks[i].ISBN);
    }
    menu();
}

void deleteBook()
{
    int ISBN;
    printf("Enter ISBN of the book to delete");
    scanf("%i", &ISBN);

    printf("Delete \n");
    menu();
}

void searchBook()
{
    // int ISBN;
    // printf("Enter ISBN of the book to delete");
    // scanf("%i", &ISBN);

    // printf("Delete");
    int search_book;
    printf("Enter ISBN for book to search");
    scanf("%i", &search_book);
    for (int i = 0; i < 5; i++)
    {
        if (bks[i].ISBN == search_book)
        {
            printf("Success \n");
        }
    }
    menu();
}