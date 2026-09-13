#include <stdio.h>
void main (){
	int size,a;
	printf("enter size of array : ");
	scanf("%d",&size);
	char arr[size];
	for(a=0;a<size;a++)
	{       getchar();
		printf("enter %d char of array : ",a);
		scanf("%c",&arr[a]);
	}
			printf("printing the vowels with index \n");
	for(a=0;a<size;a++){
		if(arr[a]=='a'||arr[a]=='e'||arr[a]=='i'||arr[a]=='o'||arr[a]=='u'||arr[a]=='A'||arr[a]=='E'||arr[a]=='I'||arr[a]=='O'||arr[a]=='U'){
			printf("%c \t %d \n",arr[a],a);


		}
	}

}
