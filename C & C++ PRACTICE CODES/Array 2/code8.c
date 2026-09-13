#include <stdio.h>
void main (){
	int size,a;
	printf("enter size of array : ");
	scanf("%d",&size);
	while(size<0){
		printf("invalid size\n ");
		printf("enter size of array : ");
		scanf("%d",&size);
	}
	char arr[size];
	for(a=0;a<size;a++){
		printf("enter %d no of array : ",a+1);
		getchar();
		scanf("%c",&arr[a]);
	}
	printf(" -------------------------------------- \n");
	for(a=0;a<size;a++){
		if(a%2==0){
			printf("%c\n",arr[a]);
		}
	}

}
