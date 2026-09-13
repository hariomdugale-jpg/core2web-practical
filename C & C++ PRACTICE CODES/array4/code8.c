#include <stdio.h>
void main (){
	int size, a,j=0,k=0,s=0,o;
	printf("enter  the size of the array : ");
	scanf("%d",&size);

	int arr[size];
	printf("enter the elements : ");
	for(a=0;a<size;a++){
		scanf("%d",&arr[a]);
	}
	

	for(a=0;a<size;a++){
		k=arr[a];
		j=0;
		while(k!=0){
			o=k%10;
			k=k/10;
			j=j*10+o;
		}
		if(j==arr[a]){
			s=1;
			break;
		}
	}
	if(s==1){
		printf("array contains palindrome number ");
	}else{
		printf("array doesn't contains palindrome number ");

	}
}

