#include <stdio.h>
void main (){
	int a,b,c,d;
	printf("Enter the start range :");
	scanf("%d",&a);
	printf("Enter the end range :");
	scanf("%d",&b);
	for(c=a;c<=b;c++){
		if(c%2!=0){
			printf("%d\n",c*c*c);


		}

	}





}
