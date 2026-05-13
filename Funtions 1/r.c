#include <stdio.h>

int arm(int,int);

void main (){

	int x;
	printf("enter your no : ");
	scanf("%d",&x);

	int (*ptr)(int,int)=arm;

	int t=x;
	int count;
	while(t!=0){
		t/=10;
		count++;
	}
	int a;
	if(a=ptr(x,count)==x){
		printf("%d is armstrong no . :",x);
	}else{

		printf("%d is not armstrong no. :",x);
	}
	printf("%d\n",a);
}

int arm(int x,int count){
	static int temp = 0;

	if(x==0){
	
		return temp;
	}

	int k=1,y=x%10;
	for(int a= 0;a<count;a++){
	
		k*=y;
		
	}
		
	temp += k;


	return arm(x/10,count);

}
