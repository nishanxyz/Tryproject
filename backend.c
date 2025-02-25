#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void main_page();
void adminlogin(); // function to call the login page
void adminmenu();

void main_page() // Login preface
{
    int opt;
    printf("\n\t1.Admin Login\n\t2.Member Login \n\t3.New Member Registration\n\t4.Customer\n");
again:

    printf("Login:  ");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        adminlogin();
        break;
    case 2:
        // memberlogin();
        break;
    case 3:
        // newregistration();
        break;
    case 4:
        // customer();
        break;
    default:
        printf("Invalid input\n");
        system("cls");
        goto again;
        break;
    }
}
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
        scanf("%c", a);
        if (toupper(a) == 'Y')
        {
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
