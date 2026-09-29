#include <stdio.h>

int main(){
    int no_of_calls;
    printf("Enter the number of calls: ");
    scanf("%d", &no_of_calls);

    if(no_of_calls <= 100){
        printf("Bill amount: ₹250\n");
    }
    else{
        printf("Bill amount: ₹%.2f\n", 250 + (no_of_calls - 100) * 1.25);
    }
    return 0;
}