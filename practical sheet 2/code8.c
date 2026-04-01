#include <stdio.h>
void main(){
	int num;
	printf("enter the number of day : ");
	scanf("%d",&num);
	switch(num){
		case 1:{
			printf("monday");
			break ;
			}
		case 2:{
			printf("tuesday");
			break ;
			}
		case 3:{
			printf("wenusday");
			break ;
			}
		case 4:{
			printf("thursday");
			break ;
			}
		case 5:{
			printf("friday");
			break ;
			}
		case 6:{
			printf("satarday");
			break ;
			}
		case 7:{
			printf("sunday");
			break ;
			}
		default :{
				printf("invalid weehday");
			break ;
			 }


	}


}
