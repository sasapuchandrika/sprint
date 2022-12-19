#include<stdio.h>
#include<stdlib.h>
#include"header.h"

#define ONE 1                                               //Defining Macros
#define TWO 2
#define THREE 3
#define FOUR 4
#define FIVE 5
#define ZERO 0

#define USR_SIZE 30
#define PASWRD_SIZE 20


/*................................................................
 *    FUNCTION NAME           :   displayMenu
 *
 *    DESCRIPTION             :   This functions displays the various menu in main menu
 *
 *    RETURNS                 :   This function returns the user entered choice to select the menu in main menu.
 */


int displayMenu()
{

        int ch;


        printf("\n\n.......................Main Menu.................");

        printf("\n1.Admin Menu\n2.Buyer Menu\n3.seller Menu\n0.Exit");

       printf("\n\tEnter your choice: ");

       scanf("%d",&ch);

        return ch;

}//end_displayMenu



// function selectMenu gets the choice to select the menu from the displayMenu.



int selectMenu(void)
{
        int ch;

        do
        {
            system("clear");

            ch=displayMenu();


            switch(ch)
            {

                    case ONE:
                            admin_menu();
                            break;

                    case TWO:
                            buyer_menu();
                            break;

                    case THREE:
                            seller_menu();
                            break;

                   case ZERO:
                            exit(0);


            }//end_switch

 }while(ch!=0);


}//end_selectMenu


/*.....................................................
 *
 *    FUNCTION NAME     :      AdminMenu
 *
 *    DESCRIPTION       :      This function is used to performs various operations in the admin by receiving choices from the user.
 *                             admin_login function - For login the admin
 *                             Manage_Seller function -For displaying the list of seller  details
 *                             Manage_Buyer function - For displaying the list of buyer details
 *                             Manage_products function -For adding or removing the products
 *
 *................................................*/



int admin_menu(void)
{

                int ch=0;

                system("clear");


                do
                {

                      printf("\n");
                      printf("\n\n......................WELCOME TO ADMIN MENU.........................\n");


                     printf("\n1.Login\n2.Menu for Manage Seller\n3.Menu for Manage buyer\n3.Menu for Manage buyer\n
                               4.Menu for Manage Products\n0:Back to main Menu");
                    printf("Enter choice");
                    scanf("%d",&ch);

                    switch(ch)
                    {


                           case ONE:
                                      admin_login();
                                        break;

                           case TWO:
                                     Manage_Seller();
                                     break;
                           case THREE:
                                     Manage_Buyer();
                                     break;
                          case FOUR:
                                     Manage_products();
                                     break;

                          case ZERO :
                                     break;
                          default :
                                     printf("Invalid choice");
                    }//end_switch

                    system("clear");

                }while(ch!=0);

                return EXIT_SUCCESS;
}
