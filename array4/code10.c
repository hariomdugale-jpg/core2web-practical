#include <stdio.h>
void main (){
	int size,num,a,j=0;
	printf("enter your no. : ");
	scanf("%d",&num);
	int arr[num/2];
	for(a=0;a<num/2;a++){
		if(num%(a+1)==0){
			arr[j]=a+1;
			j++;
		}
	}

	for(a=0;a<j;a++){
		printf(" %d | ",arr[a]);


	}


}
