int seller_registraion()
{
        if((new2=(pd*)calloc(1,sizeof(pd)))==NULL)
        {
                printf("\nMemory Allocation\n");
                return EXIT_FAILURE;
        }
        while(1)
        {
                printf("..................WELCOME TO PRODUCT RFEGISTRATION...................");

                while(1)
                {
                        printf("\nEnter seller_id: ");
                        scanf("%d",&new2->id);
                        if(validate_id(new2->id))
                                continue;
                        break;
                }
                if(start2)
                {
                        for(ptr2=start2;(ptr2) && ptr2->id!=new2->id;ptr2=ptr2->next2);
                        if(ptr2)
                        {
                                printf("\nseller id %d is already existed", new2->id);
                                return EXIT_FAILURE;
                        }
                        else
                                break;
                }
                break;
}
        while(1)
        {
                printf("Enter seller_name: ");
                fgets(new2->name,30,stdin);
                if(validate_name(new2->name))
                        continue;
                break;
        }
        while(1)
        {
                printf("Enter pan number: ");
                fgets(new2->panNo,20,stdin);
                if(validate_panNo(new2->panNo))
                        continue;
                break;
        }
        while(1)
        {
                printf("Enter phone number: ");
                scanf("%ld",&ptr2->phoneNo);
        }
        while(1)
        {
                printf("Enter Email ID:");
                fgets(new2->emailId,20,stdin);
                if(validate_emailId(new2->emailId))
                        continue;
                break;
        }
        while(1)
        {
                printf("Enter password: ");
                fgets(new2->password,20,stdin);
                if(validate_password(new2->password))
                        continue;
                break;
        }
printf("Enter any one category \n");
        printf("  1. Antique\n   2.Art\n");
        while(1)
        {
                printf("Enter choice: ");
                scanf("%d",&new2->choice);
                if(new(new2->choice==1))
                {
                        strcpy(new2->category,"Antique");
                }
                else if(new2->choice==2)
                {
                        strcpy(new2->category,"Art");
                }
                else
                {
                        printf("INVALID CHOICE....");
                        printf("Enter 1 or 2");
                        continue;
                }
                break;
                int res;
                while(1)
                {
                        printf("\nEnter the no.of items: ");
                        scanf("%d",&res);
                        new2->code=res;
                        if(res<1 || res>2)
                        {
                                printf( "NUmber of products to supply.");
                                continue;
                        }
                        else
                        {
                                for(int i=0; i<res;i++)
                                {
                                        printf("enter product id:");
                                        scanf("%d",&new2->product_id[i]);
printf("enter product name: ");
                                        fgets(new2->product_name[i],30,stdin);
                                        printf("enter product details: ");
                                        fgets(new2->product_details[i],30,stdin);
                                        printf("enter base price: ");
                                        scanf("%d",&new2->base_price[i]);
                                }
                        }
                        break;
                }
                if(!start2)
                {
                        start2=new2;
                        new2->next2=NULL;
                }
                else if(new2->panNo<start2->panNo)
                {
                        new2->next2=start2;
                        start2=new2;
                }
                else
                {

                        for(ptr2=start2;(ptr2) && ptr2->panNo<new2->panNo;prev2=ptr2,ptr2=ptr2->next2);
                        prev2->next2=new2;
                        new2->next2=ptr2;
                }

        }
       return EXIT_SUCCESS;

}



int edit_product_Details()
{

        if(!start2)
        {
                printf("\n Empty List\n");
                return EXIT_FAILURE;

        }
        char product_name;
        while(1)
        {
                printf("\nEnter product name for editing : ");
                fgets(product_name,30,stdin);
                if(validate_name(product_name))
                        continue;
                break;
        }

        for(ptr2=start2; (ptr2) && ptr2->product_name!=product_name;ptr2=ptr2->next2);
        if(!ptr2)
        {
                printf("\nproduct name is not found");
                return EXIT_FAILURE;
        }

        printf("Enter any one category from below given. \n");
        printf(" 1.Antique\n  2.Art\n");
        scanf("%d",&ptr2->choice);
        if(ptr2->choice==1)
        {
                strcpy(ptr2->category,"Antique");
        }
        else if(ptr2->choice==2)
        {
 strcpy(ptr2->category,"Art");
        }
        int res;
        printf("Enter no.of product");
        scanf("%d",&res);
        if(res<1 || res>2)
        {
                printf("\n please enter your choice 1 or 2");
        }



        else
        {
                for(int i =0;i<res;i++)
                {
                        printf("Enter product id: ");
                        scanf("%d",&ptr2->product_id[i]);
                        printf("Enter product name : ");
                        fgets(ptr2->product_name[i],30,stdin);
                        printf("Enter product details : ");
                        fgets(ptr2->product_details[i],30,stdin);
                        printf("Enter base price: ");
                        scanf("%d",&ptr2->base_price[i]);
                }
        }
        return EXIT_SUCCESS;
}

int view_products()
{
        if(!start2)
{
                printf("\n Empty List\n");
                return EXIT_FAILURE;
        }
        printf("\n product_id       product_name     product_details      base_price \n");
        for(ptr2=start2;(ptr2);ptr2=ptr2->next2)
        {
                for(int i=0;i<ptr2->code;i++)
                {
                        printf("%d  %s  %s  %d \n", ptr2->product_id,ptr2->product_name[i],ptr2->product_details[i],ptr2->base_price[i]);
                }
        }
        return EXIT_SUCCESS;
}

int seller_to_list()
{
        FILE *p;
        pdd f1;
        if((p=fopen("product.txt","rb")))
        {
                printf("\nFile not found\n");
                return EXIT_FAILURE;
        }
        fread(&f1,sizeof(pdd),1,p);
        while(!feof(p))
        {
                if((new2=(pd *)calloc(1,sizeof(pd)))==NULL)
                {
                        printf("\n Memory allocation failed\n");
                        return EXIT_FAILURE;
                }
                new2->id=f1.id;
                strcpy(new2->name,f1.name);
                new2->phoneNo=f1.phoneNo;
                strcpy(new2->emailId,f1.emailId);
                strcpy(new2->panNo,f1.panNo);
                strcpy(new2->password,f1.password);
                strcpy(new2->category,f1.category);
                new2->code=f1.code;
for(int i=0;i<f1.code;i++)
                {
                        new2->product_id[i]=f1.product_id[i];
                        strcpy(new2->product_name[i],f1.product_name[i]);
                        strcpy(new2->product_details[i],f1.product_details[i]);
                        new2->base_price[i]=f1.base_price[i];
                }
                if(!start2)
                {
                        start2=last2=new2;
                        new2->next2=NULL;
                }
                else
                {
                        last2->next2=new2;
                        last2=new2;
                        new2->next2=NULL;
                }
                fread(&f1,sizeof(pdd),1,p);
        }
        free(new2);
        fclose(p);
        return EXIT_SUCCESS;
}

int list_to_seller()
{
        pdd f2;
        if(!start2)
        {
                printf("\n list is empty\n");
                return EXIT_FAILURE;
        }
        FILE *p1;
        if((p1=fopen("product.txt","wb"))==NULL)
        {
                printf("\nFile is not found\n");


return EXIT_FAILURE;
        }
        for(ptr2=start2;(ptr2);ptr2=ptr2->next2)
        {
                f2.id=ptr2->id;
                strcpy(f2.name,ptr2->name);
                f2.phoneNo=ptr2->phoneNo;
                strcpy(f2.panNo,ptr2->panNo);
                strcpy(f2.emailId,ptr2->emailId);
                strcpy(f2.password,ptr2->password);
                strcpy(f2.category,ptr2->category);
                f2.code=ptr2->code;
                for(int i=0;i<f2.code;i++)
                {
                        f2.product_id[i]=ptr2->product_id[i];
                        strcpy(f2.product_name[i],ptr2->product_name[i]);
                        strcpy(f2.product_details[i],ptr2->product_details[i]);
                        f2.base_price[i]=ptr2->base_price[i];
                }
                fwrite(&f2,sizeof(pdd),1,p1);
        }
        fclose(p1);
        return EXIT_SUCCESS;
}

