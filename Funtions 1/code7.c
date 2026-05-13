#include <stdio.h>
int duck(int);
void main (){

	int x;
	printf("enter your no : ");
	scanf("%d",&x);

	int (*ptr)(int)= duck;
	if(ptr(x)==1){

		printf("%d is duck \n",x);

	}else{
		
		printf("%d is not duck \n",x);

	}

}

int duck(int x)
{	if(x==0){

			return 0;
		}
	int y;
		
	if(x%10==0){
		return 1;
	}
	
	return duck(x/10);



}
