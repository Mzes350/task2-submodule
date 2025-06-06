#include <stdio.h>

int main ()
{

    float asset_cost = 5000.0;
    float residual_value = 500.0;
    int useful_life = 5;
    float depreciation;

    // Calculate depreciation
    depreciation = (asset_cost - residual_value) / useful_life;


    printf("Annual depreciation: UGX %.2f\n", depreciation);

    return 0;
}
