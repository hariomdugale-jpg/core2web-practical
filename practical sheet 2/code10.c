#include <stdio.h>
void main (){
	int angle1,angle2,angle3,sum;
	printf("Enter the value of angle1 : ");
	scanf("%d",&angle1);
	printf("Enter the value of angle2 : ");
	scanf("%d",&angle2);
	printf("Enter the value of angle3 : ");
	scanf("%d",&angle3);
	sum =angle1+angle2+angle3;
	if(angle1!=0 && angle2!=0 && angle3!=0){
		if(sum==180){
			printf("The triangle is valid");
		}else{
			printf("The trienge is invalid");
		}
	}else{
			printf("The trienge is invalid");
	}
}
