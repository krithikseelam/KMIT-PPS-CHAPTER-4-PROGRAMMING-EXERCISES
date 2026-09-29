#include <stdio.h>

int main(){
    
    int x, y, z;
    printf("Enter a no. : ");
    scanf("%d", &x);
    printf("Enter a no. : ");
    scanf("%d", &y);
    printf("Enter a no. : ");
    scanf("%d", &z);

    switch (x > y)
    {
        case 1:
        switch(x > z){
            case 1:
            printf("%d is the greatest.", x);
            break;
            case 0:
            printf("%d is the greatest.", z);
            break;
        }
        case 0:
        switch(y > z){
            case 1:
            printf("%d is the greatest.", y);
            break;
            case 0:
            printf("%d is the greatest.", z);
            break;
        }
    
    }

    return 0;
}