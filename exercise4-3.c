#include <stdio.h>

int main() {
    int num = 5678;
    int divisor = 1;
    
    for (int temp = num; temp >= 10; temp /= 10) {
        divisor *= 10;
    }
    
    while (divisor > 0) {
        printf("%d\n", num % (divisor * 10));
        divisor /= 10;
    }
    
    return 0;
}
