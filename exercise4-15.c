#include <stdio.h>
#include <math.h>

int main(){
    
    int i = 0;
    float z;
    printf("Number Root  Square\n");
    while(i <= 100){
        z = pow(i, 0.5);
        printf("%d    %.2f    %d\n", i, z, i * i);
        i++;
    }

    return 0;
}