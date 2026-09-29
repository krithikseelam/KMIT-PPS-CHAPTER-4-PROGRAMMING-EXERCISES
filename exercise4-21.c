#include <stdio.h>

int main(){
    int x,y;
    printf("Give values of x,y to do x/y: ");
    scanf("%d,%d",&x,&y);
    if(y == 0){
        printf("division not possible");
    }
    else{
        printf("x/y = %f",(float)x/y);
    }
    return 0;
}