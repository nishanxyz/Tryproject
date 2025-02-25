#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void adminlogin(); // function to call the login page
void adminmenu();
void addbook();

struct books
{    
    char book[100];
    char author[100];
    int price;

};

struct books b;
FILE *fp;

void adminlogin() // admin login page
{
    char username[10];
    char password[10];
    char a;
top:
    printf("         Username: ");
    scanf("%s", username);
    printf("         Password: ");
    scanf("%s", password);
    if ((strcmp(username, "admin") == 0) && (strcmp(password, "admin") == 0))
    {
        adminmenu();
    }
    else
    {
        printf("----------Wrong credentials--------");
        printf("\n\tWant to try again?[Y/N]  ");
        scanf(" %c", &a);
        if (toupper(a) == 'Y')
        {
            system("cls");
            goto top;
        }
       
    }
}

void adminmenu() // adminmenu
{
    int opt;
    system("cls");
    printf("\n-------Welcome to admin page:-------\n\t1.Add new book\n\t2.Available Books\n\t3.Total sales\n\t4.Members List");
    printf("\n\t Option:-- ");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        addbook();
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;

    default:
        break;
    }
}
void addbook()
{
    FILE *fp = fopen("book_list.txt", "a+"); // Open in append+read mode
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        exit(EXIT_FAILURE);
    }

    int serialNumber = 1; // Default serial number

    // Check if file is empty (to add the header)
    fseek(fp, 0, SEEK_END);
    if (ftell(fp) == 0) // If file size is 0, write the header
    {
        fprintf(fp, "%-5s | %-20s | %-20s | %-10s\n", "No.", "Book Name", "Author", "Price");
        fprintf(fp, "-------------------------------------------------------------\n");
    }
    else
    {
        // Count the number of books already in the file
        rewind(fp); // Move pointer to the beginning of the file
        char line[256];
        while (fgets(line, sizeof(line), fp) != NULL)
        {
            if (isdigit(line[0])) // Check if the first character is a number
            {
                serialNumber++;
            }
        }
    }

    // Move to the end of the file before writing new entry
    fseek(fp, 0, SEEK_END);

    // Take input
    printf("\nEnter book name: ");
    scanf(" %[^\n]", b.book);

    printf("Enter author's name: ");
    scanf(" %[^\n]", b.author);

    printf("Enter price: ");
    scanf("%d", &b.price);

    // Write book details with serial number
    fprintf(fp, "%-5d | %-20s | %-20s | RS %-10d\n", serialNumber, b.book, b.author, b.price);
    fclose(fp);

    printf("\nBook added successfully!\n");
}

