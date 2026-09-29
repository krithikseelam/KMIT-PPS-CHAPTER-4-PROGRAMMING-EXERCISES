#include <stdio.h>

int main(){
    float a,b,c,d;
    printf("Give values of a,b,c,d: ");
    scanf("%f,%f,%f,%f",&a,&b,&c,&d);
    printf("(a+b)*(c/d) = %f\n",(a+b)*(c/d));
    printf("(a+b)*c/d = %f \n",(a+b)*c/d);
    printf("a+(b*c)/d = %f\n",a+(b*c)/d);
    return 0;
}