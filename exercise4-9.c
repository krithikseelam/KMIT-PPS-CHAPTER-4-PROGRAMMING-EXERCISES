#include <stdio.h>

int main(){
    
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    int sum = 0;
    while(x != 0){
        sum += x % 10;
        x /= 10;
    }
    printf("%d", sum);

    return 0;
}