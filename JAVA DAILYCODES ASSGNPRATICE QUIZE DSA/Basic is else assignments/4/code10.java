import java.util.Scanner;

class IfElse{

	public static void main(String[] args){

		System.out.println("no of passenger in the bus : 10");
		System.out.println("capacity of bus : 20");


		System.out.println("enter your member : ");
		Scanner s= new Scanner(System.in);
		int x = s.nextInt();

		if(x + 10 > 20){

			System.out.println("your members can't fit in the bus");
		}else{

			System.out.println("your members  fit in the bus");
		}
		


	}

}
