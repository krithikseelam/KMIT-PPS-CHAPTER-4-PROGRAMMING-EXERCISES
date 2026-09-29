#include<stdio.h>
#include<math.h>
int main(){
	double EOQ, TBO;
	double demand_rate, setupcost, holdingitem;

	//holdingitem -- holding cost per unit time

	printf("Enter demand rate: ");
	scanf("%lf",&demand_rate);
	printf("Enter setup cost: ");
	scanf("%lf",&setupcost);
	printf("Enter holding cost per unit time: ");
	scanf("%lf",&holdingitem);

	EOQ = sqrt((2*demand_rate*setupcost)/holdingitem);
	TBO = EOQ/demand_rate;

	printf("Economic Order Quantity (EOQ) = %lf\n", EOQ);
	printf("Time Between Orders (TBO) = %lf\n", TBO); 
	
	return 0;
}
