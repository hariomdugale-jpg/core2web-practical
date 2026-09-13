#include <stdio.h>
#include <stdlib.h>

struct obj{
	int roll_no;
	float prize;
	char name[20];

}obj1={21,456.54,"hariom"};

void fun(struct obj obj2){

	printf("roll_no is : %d\n",obj2.roll_no);
	printf("prize is : %f\n",obj2.prize);
	printf("name is : %s\n",obj2.name);

}
void main (){
	fun(obj1);
	

}
