#include <stdio.h>

struct Library
{
    struct Book
    {
        int id;
        char title[50];
        char author[50];
    } book;

    int quantity;
};

void input(struct Library *l)
{
    printf("Enter Book ID: ");
    scanf("%d", &l->book.id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", l->book.title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", l->book.author);

    printf("Enter Quantity: ");
    scanf("%d", &l->quantity);
}

void display(struct Library l)
{
    printf("\n--- Library Record ---\n");
    printf("Book ID   : %d\n", l.book.id);
    printf("Book Title: %s\n", l.book.title);
    printf("Author    : %s\n", l.book.author);
    printf("Quantity  : %d\n", l.quantity);
}

int main()
{
    struct Library l;

    input(&l);
    display(l);

    return 0;
}