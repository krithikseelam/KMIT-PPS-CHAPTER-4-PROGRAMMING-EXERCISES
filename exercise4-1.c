#include <stdio.h>

int main(){
    float number;
    printf("Give a number: \n");
    scanf("%f",&number);
    number = (int)number % 10;
    printf("The right most digit of integral part: %.0f",number);
    return 0;
}