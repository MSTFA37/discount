/* This program runs the function discount which gives the sale price of a product after a percent discount */

#include <stdio.h>
#include <stdlib.h>

float discount(float price, int percent);

int main(void)
{
    float price;
    int percent;
    printf("Enter the regular price: \n");
    scanf(" %f", &price);
    printf("Enter the discount perentage: \n");
    scanf(" %d", &percent);
    float sale = discount(price, percent);
    printf("Sale price: $%.2f \n", sale);
    
}


float discount(float price, int percent)
{
    return price * (100- percent)/100 ;
}