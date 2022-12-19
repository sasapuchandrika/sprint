#include<stdlib.h>
#include<string.h>

typedef struct seller_Details
{
        int id;
        char name[30];
        char emailId[20];
        long int phoneNo;
        char panNo[10];
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

typedef struct sellerTemp
{
        int id;
        char name[30];
        char emailId[20];
        long int phoneNo;
        char panNo[10];
        int product_id[3];
        char product_name[20];
        char product_details[30];
        char category[20];
        char password[20];
        int base_price[4];
        int choice;
        int code;
}pdd;

pd *start2, *new2, *ptr2, *prev2, *last2;

int edit_product_details();
int view_product();
int delete_product();