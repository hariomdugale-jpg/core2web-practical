#include <stdio.h>
void main (){
	int selling_price,cost_price,profit;
	printf("Enter the selling price : ");
	scanf("%d",&selling_price);
	printf("Enter the cost price : ");
	scanf("%d",&cost_price);
	profit=selling_price-cost_price;
	if(profit >0){
	printf("profit is : %d",profit);
	}else if (profit<0){
	printf("loss is : %d",profit*(-1));
	}else{
	printf("neither profit nor loss is : %d",profit);
	}



}
