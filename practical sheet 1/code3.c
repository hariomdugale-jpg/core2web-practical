#include <stdio.h>
void main (){
	int x=19;
	int ans1 =0;
	int ans2=0;


	ans1=x++ + --x - x++;
	x =19;
	ans2= --x + x-- - x++ + ++x;

	printf("ans of x++ + --x - x++= %d \n ",ans1);
	printf("ans of  --x + x-- - x++ + ++x = %d \n",ans2);


}/* 
	ans1=x++ + --x - x++
	ans1=19
	ans2= --x + x-- - x++ + ++x
	ans2=37*/
