#include <stdio.h>

int main()
{
float sales_volume = 50000.0;
    float commission_rate = 0.05; // 5%
    float commission;

    // Calculate the commission
    commission = sales_volume * commission_rate;

    // Output the result
    printf("Commission: UGX %.2f\n", commission);


    return 0;
    }
