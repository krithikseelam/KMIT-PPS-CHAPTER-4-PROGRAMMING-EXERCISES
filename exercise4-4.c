#include <stdio.h>

int main() {
    float purchase_price, annual_depreciation, salvage_value;
    int years_of_service;

    printf("Enter the purchase price: ");
    scanf("%f", &purchase_price);

    printf("Enter the years of service: ");
    scanf("%d", &years_of_service);

    printf("Enter the annual depreciation: ");
    scanf("%f", &annual_depreciation);

    salvage_value = purchase_price - (annual_depreciation * years_of_service);

    printf("The salvage value of the item is: %.2f\n", salvage_value);

    return 0;
}
