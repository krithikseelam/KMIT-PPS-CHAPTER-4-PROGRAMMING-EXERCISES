#include <stdio.h>

int main(){
    float number;
    printf("Give a number: \n");
    scanf("%f",&number);
    number = (int)number % 100;
    printf("The 2 right most digit of integral part: %.0f",number);
    return 0;
}