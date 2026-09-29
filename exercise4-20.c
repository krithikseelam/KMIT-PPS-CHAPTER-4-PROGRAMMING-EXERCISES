#include <stdio.h>

int main(){
    
    int x, y, z;
    printf("Enter a no. : ");
    scanf("%d", &x);
    printf("Enter a no. : ");
    scanf("%d", &y);
    printf("Enter a no. : ");
    scanf("%d", &z);
    if(x + y <= z || x + z <= y || y + z <= x){
        printf("Invalid sides of a triangle nga");
    }
    else if(x == y || y == z || z == x){
        printf("Triangle is an isoceles triangle.");
    }
    else{
        printf("Not an isoceles triangle.");
    }

    return 0;
}
