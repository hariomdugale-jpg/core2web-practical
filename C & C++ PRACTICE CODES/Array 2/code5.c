#include <stdio.h>
void main (){
	int size,a,age;
	printf("enter no of children : ");
	scanf("%d",&size);
	while(size<0){
		printf("invalid size\n ");
		printf("enter no of chidren : ");
		scanf("%d",&size);
	}
	int arr[size];
	for(a=0;a<size;a++){
		printf("enter %d chidren age : ",a+1);
		scanf("%d",&age);
		while(age>5){
			printf("age should not be grater than 5.re-enter the age : ");
			scanf("%d",&age);
		}
		arr[a]=age;
	}
	printf("age of children : \n");
	for(a=0;a<size;a++){
			printf("%d\n",arr[a]);
		
	}

}
