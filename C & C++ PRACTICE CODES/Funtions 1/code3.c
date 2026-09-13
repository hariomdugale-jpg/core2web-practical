#include<stdio.h>

int square(int);

void main(){
	int x,y;
	printf("enter starting range : ");
	scanf("%d",&x);
	
	printf("enter starting end : ");
	scanf("%d",&y);
	
	int (*ptr)(int)=square;

	printf("square of no. from from range %d to %d  :\n ",x,y);
	for(int i = x;i<y;i++){
		printf("%d\n",ptr(i));

	}


}


int square(int i){
	return i*i;
}
