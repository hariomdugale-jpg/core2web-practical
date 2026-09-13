#include <stdio.h>
void main (){
	int size,a;
	float heigth;
	printf("enter size of array : ");
	scanf("%d",&size);
	while(size<0){
		printf("invalid size\n ");
		printf("enter size of array : ");
		scanf("%d",&size);
	}
	float arr[size];
	for(a=0;a<size;a++){
		printf("enter %d person heigth in ft : ",a+1);
		scanf("%f",&heigth);
		while(heigth>6 || heigth<5.5){
			printf("heigth  should not be grater than 6ft and less than 5.5ft .re-enter the height : ");
			scanf("%f",&heigth);
		}
		arr[a]=heigth;
	}
	printf("printing valid age  : \n");
	for(a=0;a<size;a++){
			printf("%f\n",arr[a]);
		
	}

}
