import java.util.Scanner;

class IfElse{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("enter your age as input : ");
		int x = s.nextInt();

		if(x < 0){

			System.out.println(x+" is invalide age");
		}else if (x >= 18){

			System.out.println(x+ " age is valide for the vote");

		}else {

			System.out.println(x+ " age is  not valide for the voting ");

		}

	}


}
