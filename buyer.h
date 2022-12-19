//this is a buyer module header file

#include<stdio.h>
#include<string.h>               //preprocessor directives
#include<stdlib.h>



//Declaring struct buyer login
struct buyer_login
{
        char username[20];
        char password[20];
        int buyerID;
        int buyeraadhar;
        int buyerphoneno;
        char buyeraddress[10];
};



int buyer();                 //function for entering buyer module
int buyer_reg();             //function for buyer registraion
int buyer_log();             // function for buyer login 
void view_products();        //function for buyer view the products
void select_product();       //function for select the product from the list
void bid_product();          //function to start bidding on the item
void my_auction();           //function buyer see his bidded items
