#include <stdio.h>

int main ()
{
    float total_sales = 60000.0;
    int days = 30;
    float average_sales;

    // Calculate the average sales
    average_sales = total_sales / days;


    printf("Average sales per day: UGX %.2f\n", average_sales);


    return 0;
}
