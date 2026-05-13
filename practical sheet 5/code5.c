#include <stdio.h>
void main (){
	int a,b,c,d;
	d=1;
	printf("Enter the start range :");
	scanf("%d",&a);
	printf("Enter the end range :");
	scanf("%d",&b);
	for(c=a;c<=b;c++){
		if(c%2==0){
			d*=c;
		}
	}
	printf("product of the even number in the range is : %d ",d);




}
