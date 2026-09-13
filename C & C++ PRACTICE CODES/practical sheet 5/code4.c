#include <stdio.h>
void main (){
	int a,b,c,d;
	d=0;
	printf("enter start range value  : ");
	scanf("%d",&a);
	printf("enter end range value : ");
	scanf("%d",&b);
	for(c=a;c<=b;c++){
		d+=c;

	}
	printf("the sum of all number is : %d",d);





}
