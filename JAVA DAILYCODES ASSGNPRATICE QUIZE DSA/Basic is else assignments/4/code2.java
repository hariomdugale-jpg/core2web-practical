import java.util.Scanner;

class IfElse{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("enter your integer as input : ");
		int x = s.nextInt();

		if(x % 13 == 0){

			System.out.println(x+" in the of 13");
		}else{

			System.out.println(x+" is not in the table of 13");

		}

	}


}
