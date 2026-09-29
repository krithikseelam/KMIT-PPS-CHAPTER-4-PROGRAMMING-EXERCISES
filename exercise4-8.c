#include<stdio.h>
#include<math.h>

int main(){
	double L = 1,R = 200 ,frequency;
	
	float C = 0.01;
	int i = 0;
	while(C <= 0.1){
		frequency = sqrt(1.0/(L*C) - R*R/(4*pow(C,2)));
		printf("Frequency: %lf\n",frequency);
		C = C + 0.01;
	}
	return 0;
}
