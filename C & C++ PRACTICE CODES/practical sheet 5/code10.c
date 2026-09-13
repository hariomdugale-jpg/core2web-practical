#include <stdio.h>
void main (){
	int a,b,c,d;
	c=0;
	printf("enter your number : ");
	scanf("%d",&a);
	for(b=2;b<c;b++){
		if(a%b==0 && a!=b){
			c++;
		}
	}
	if(c==0){
      		printf("number is composite ");
	}else{
		printf("number is not composite ");
	}





}
