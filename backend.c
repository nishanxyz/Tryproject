#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include"admin_backend.c"

void adminlogin(); // function to call the login page
void adminmenu();

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
        available_books();
        break;
    case 3:
    //  sales();
        break;
    case 4:
        break;

    default:
        break;
    }
}
