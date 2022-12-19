#include"seller.h"


int main()
{
        int ch=0;
        seller_to_list();
        system("clear");
        while(ch!=5)
        {
                printf("\n");
                printf("\n.................seller menu.................\n");
                printf("1.seller registration\n 2.edit product details\n 3.view product\n 4.delete product\n");
                printf("\nEnter choice: ");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1: seller_registration();
                                break;
                        case 2: edit_product_details();
                                break;
                        case 3: view_product();
                                break;
                        case 4: delete_product();
                                break;
                        case 5:break;
                        default: printf("Invalid choice");
                }
        }


        list_to_seller();
        system("read a");
        system("clear");
        return EXIT_SUCCESS;
}
