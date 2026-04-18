#include <stdio.h>
void main (){
	int size,a,num;
	printf("enter size of array : ");
	scanf("%d",&size);
	while(size<0){
		printf("invalid size\n ");
		printf("enter size of array : ");
		scanf("%d",&size);
	}
	int arr[size];
	for(a=0;a<size;a++){
		printf("enter %d no of array : ",a+1);
		scanf("%d",&num);
		if(num%2==0){
			arr[a]=num*num;
		}else{
			arr[a]=num*num*num;
		}
	}
	printf(" -------------------------------------- \n");
	for(a=0;a<size;a++){
			printf("%d\n",arr[a]);
		
	}

}
