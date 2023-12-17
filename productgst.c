#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* 
    float product [3];
        printf("Enter the first product price: ");
            scanf("%f",&product[0]);
        printf("Enter the second product price: ");
            scanf("%f",&product[1]); 
        printf("Enter the third product price:  ");
            scanf("%f",&product[2]);
        float price = ( product[0] + product[1] + product[2] );
            char per='%';
    printf("Final cost of each product \n 1st product=%0.2f Taka BDT\n 2nd product=%0.2f Taka BDT\n 3rd product=%0.2f Taka BDT\n",product[0],product[1],product[2]);
    printf("Total cost with 15%c GST=%0.2f Taka BDT",per,price*1.5);
    */
        float price[3]={50 , 60 , 70};
        /*printf("Enter the price :\n");
        scanf("%f",&price[0]);
        scanf("%f",&price[1]);
        scanf("%f",&price[2]);*/
        //GST is 15% = 1.5 ;
            printf("price of 1st product with GST = %0.2f\n",price[0]+(price[0]*1.5));
            printf("price of 2nd product with GST = %0.2f\n",price[1]+(price[1]*1.5));
            printf("price of 3rd product with GST = %0.2f\n",price[2]+(price[2]*1.5));
            return 0 ;
}
