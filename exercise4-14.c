#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){
    int degree = 0;
    double radian;
    printf("x(degrees)\t\t\t\tsin(x)\t\t\t\tcos(x)\n");
    while(degree <= 180){
        radian = degree * (PI / 180.0);
        printf("%d\t\t\t\t\t%.2f\t\t\t\t\t%.2f\n\n\n", degree, sin(radian), cos(radian));
        degree += 15;
    } 
    return 0;
}