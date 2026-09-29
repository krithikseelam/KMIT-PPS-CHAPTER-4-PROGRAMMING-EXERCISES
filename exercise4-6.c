#include<stdio.h>
#include<math.h>
int main(){
	float u,a,distance;
	int t;

	printf("Give values of u,a: \n");
	scanf("%f,%f",&u,&a);

	printf("Enter the interval of time 0-t: \n");
	scanf("%d",&t);

	while(t >= 0){
		distance = u*t + (a*pow(t,2))/2;
		printf("\nDistance = %.2f at t = %d",distance,t);
		t--;
	}

	return 0;
}
