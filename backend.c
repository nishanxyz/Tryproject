#include<stdio.h>
void LoginPage();
void adminlogin();//function to call the login page
void menuui();



void LoginPage()  //Login preface
{
    int opt;
    printf("\n\t1.Admin Login\n\t2.Member Login \n\t3.New Member Registration\n");
    again:
    printf("Login:  ");
    scanf("%d",&opt);
  
 switch (opt)
 {
 case 1:
     adminlogin();
     break;
 case 2:
     // memberlogin();
 default:
 printf("Invalid input\n");
 goto again;
     break;
 }
}
void adminlogin() //admin login page
{
    char username[10];                              
    char password[10];                              
    printf("         Username: ");
    scanf("%s",username);
    printf("         Password: ");
    scanf("%s",password);
    if ((strcmp(username,"admin")==0) && (strcmp(password,"admin")==0))
    {
         menuui();
    }
    else
    {
        printf("wrong credentials");
    }
}

void menuui() // user menu 
{
    printf("What do you want to do?\n"
           "1. About Books List\n"
           "2. Dealer List\n"
           "3. Customer List\n"
           "4. Maintenance Record\n"
           "5. Distributor and dealer list\n");
}
