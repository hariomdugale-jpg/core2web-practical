#include <stdio.h>
void main (){
	

	int size, a,j=0,sum=0,s=0,k=0,o=0;
	printf("enter  the size of the array : ");
	scanf("%d",&size);


	int arr[size];
	printf("enter the elements : ");
	for(a=0;a<size;a++){
		scanf("%d",&arr[a]);
	}


	
	printf(" strong no are of elements are : \n\n");
	for(a=0;a<size;a++){

		sum=0;
		k=arr[a];
		

		while(k!=0){
			j=1;
			o=k%10;
			k=k/10;
		

			for(int b=1;b<=o;b++){
				j*=b;
			
			}
			
			sum+=j;
		}




		if(sum==arr[a]){
			s++;
			printf("%d \n",sum);
		}
	
	}

	
	if(s==0){
		printf("array doesn`t contain strong no. ");
	}else{

		printf("array contain strong no .");
	}


}

