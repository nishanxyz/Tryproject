#include<stdio.h>
#include<conio.h>
void login();
void menuui();
void booklist();
//to increase the 
int main(){
    //to  shwo the menu
    printf("  -------MAIIN MENU-------\n"
        "Welcome to the BSMS\n"
        "Please LOGIN:\n");
        //login credentials area
        void MENUUI();

    return  0;
//adding a book list

}
 //to create a login section
 void  login(){
    char actual_Username[100]="BookStoreUser@KTM";/*a backend process which depends on the developer
    to determine what is the accessible one"*/
    char actual_password[100]="BOOKSTORE@1234";/**a backend process which depends on the developer
    to determine what is the accessible one"*/
    char Username[100];/*Advised to put a single username that can only be infer
     inferred  witha  key*/
    char password[100];//advised to put the password length less than 100
    printf("Please enter the valid book  store username/t");
    scanf("%s",&Username);
    printf("Please write  the valid  password of the username\t");
    scanf("%s",&password);
    if (Username[100]==actual_Username[100] && password[100]==actual_password[100]){
        void MENUUI();
    }
    else {
        printf("wrong credentials");
    }
 
    }
//to create a menu ui to access the working of the application
void menuui(){
    printf("What do you want to do?\n"
    "1. About Books List\n"
    "2. Dealer List\n"
    "3. Customer List\n"
    "4. Maintenance Record\n"
    "5. Distributor and dealer list\n"    
);

}
