#include <stdio.h>

int main(){
    int a,b,c;
    printf("give values of a,b,c");
    scanf("%d,%d,%d",&a,&b,&c);

    int x = a-b/3+c*2-1;
    printf("%d",x);
    return 0;
}