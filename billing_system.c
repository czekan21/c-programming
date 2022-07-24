#include <stdio.h>



#define NUM_STRINGS 10
#define MAX_LENGTH_OFSTRING 1000



int main(void){

    int quantity[10], amount_of_products, ticket_num, i;
    float price[10], total[10], total_for_all;
    char product[NUM_STRINGS][MAX_LENGTH_OFSTRING + 1]; // 1 more space for null character!

    

    printf("                                                                CZEKAN\n");
    printf("                                                           POLISH RESTAURANT\n\n");


    printf("                                                  *********************************\n\n\n");


    printf("Please enter amount of products from your order: ");
    scanf("%d", &amount_of_products);

    for (i = 1; i <= amount_of_products; i++){

        printf("\nProduct %d name: ", i);
        scanf("%s", product[i]);

        printf("Enter price: $");
        scanf("%f", &price[i]);
        printf("Enter quantity: ");    
        scanf("%d", &quantity[i]);

        total[i] = quantity[i] * price[i];
        total_for_all += total[i];

        printf("\n-----------------\n\n");
       
    }
    printf("=======================================================\n");
    printf("     ITEM       QTY     PRICE   TOTAL\n");
     for (i = 1; i <= amount_of_products; i++){
   
    printf("     %s       %d      $%.2f   $%.2f", product[i], quantity[i], price[i], total[i]);
    printf("\n=======================================================\n");
        }
    printf("  \n\n  ***********************************************\n");
    printf("                TOTAL: %.2f\n", total_for_all);
    printf("       ** THANK YOU FOR DINNING WITH US! **\n");
    printf("         * WE HAVE FREE HOME DELIVERY! *\n\n");
    printf("  ***********************************************");


    

    








    



    return 0;
}
