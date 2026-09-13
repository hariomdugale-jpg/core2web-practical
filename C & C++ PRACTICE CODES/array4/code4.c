#include <stdio.h>
void main (){
	int size, a,j=0,k=0;
	printf("enter  the size of the array : ");
	scanf("%d",&size);

	int arr[size];
	printf("enter the elements : ");
	for(a=0;a<size;a++){
		scanf("%d",&arr[a]);
	}
	
	printf("factorial of elements are : \n");
	for(a=0;a<size;a++){
		j=1;
		for(int i=1;i<=arr[a];i++){
			
			j*=i;
					
		}

		printf("% d |  ",j);
	}


}

