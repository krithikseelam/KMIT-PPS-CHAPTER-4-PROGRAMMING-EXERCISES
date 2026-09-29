#include <stdio.h>

int main(){
    
    int x, y, z;
    printf("Enter a no. : ");
    scanf("%d", &x);
    printf("Enter a no. : ");
    scanf("%d", &y);
    printf("Enter a no. : ");
    scanf("%d", &z);
    printf("Sum of values = %d\n", x + y + z);
    printf("Avg of values = %d\n", (x + y + z)/3);
    if(x > y & x > z){
        printf("%d is the greatest.\n", x);
    }
    else if(y > z){
        printf("%d is the greatest.\n", y);
    }
    else{
        printf("%d is greatest.\n", z);
    }

    if(x < y & x < z){
        printf("%d is the smallest.", x);
    }
    else if(y < z){
        printf("%d is the smallest.", y);
    }
    else{
        printf("%d is greatest.", z);
    }


    return 0;
}