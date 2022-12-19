#ifdef HEADER_H
#define HEADER_H

#include<stdio.h>                                                    //preprocessor Directives
#include<stdlib.h>
#include<string.h>

#define USR_SIZE 30                                                  //defining macros
#define PASWRD_SIZE 20

//struct declaration with typedef

typedef struct buyer_Details
{
        int Id;
        char Name[30];
        char EmailId[20];
        long int phoneno;
        char PanNo[10];
        struct buyer_Details *next;
}bd;


//declared details of buyer using structure

typedef struct buyer_Temp
{
        int Id;
        char Name[30];
        char EmailId[20];
        long int phoneno;
        char PanNo[10];

}bdd;


//declared details of seller using structure

typedef struct seller_Details
{

         int id;
         char name[30];
         char emailId[20];
         long int phoneNo;
         char PanNo[10];
         int product_id[3];
         char product_name[20];
         char product_details[30];
         char category[20];
         char password[20];
         int base_price[4];
         int choice;
         int code;

        struct seller_Details *next2;

}pd;



typedef struct seller_Temp
{
        int id;
        char name[30];
        char emailId[20];
        long int phoneNo;
        char PanNo[10];
        int product_id[3];
        char product_name[20];
        char product_details[30];
        char category[20];
        char password[20];
        int base_price[4];
        int choice;
        int code;


}pdd;

//declaring details of admin using structure

struct admin_login
{
        char username[USR_SIZE];
        char password[PASWRD_SIZE];
}



bd  *start1,*new1,*ptr1,*prev1,*last1;                   //pointers of buyer struct
pd  *start2,*new2,*ptr2,*prev2,*last2;                   //pointers of seller struct


int selectMenu();

int displayMenu();                                        //display menu in order to choose the admin or seller or buyer


//functions of main menu 

int admin_menu(void);                                    //admin menu consists of login and to manage seller and buyer and the products menu

int buyer_menu();

int seller_menu();


//functions of admin menu

int admin_login(void);
void Manage_Seller();

void Manage_Buyer();
void Manage_products();

//functions of Manage_Seller()

void Block_Seller();
void list_sellerDetails();


//functions of Manage_Buyer()

void Block_Buyer();
void list_buyerDetails();


//functions of manage products

int edit_product_details();
int add_products();
int view_product();
int delete_product();


//validations                          //Below are the validation functions in order to validate the name,id,pan,phoneno and password based on conditions..

int validate_name(char *);
int validate_password(char *);
int validate_Pan(char *)
int validate_phoneno(long long int);
int validate_mailId(char *);

#endif