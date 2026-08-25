#include <stdio.h>

void main (){

	int size ;
	printf("Enter size f array  ");
	scanf("%d",&size);

	char arr[size];
	for(int i = 0;i < size ; i++){
		getchar();
		scanf("%c",&arr[i]);
	}

	for(int i = 1 ; i <= size; i++ ){

		for(int j = 0; j<i ; j++){

			printf("%c\t",arr[j]);

		}
		printf("\n\n");
	}

}
