import java.util.Scanner;

class IfElse{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("enter your purseing price : ");
		float x = s.nextFloat();
		System.out.println("enter your selling price : ");
		float y = s.nextFloat();

		float result = y - x;


		if(result >= 0 ){

			System.out.println("profit of "+result);
		}else {

			result *= -1;
			System.out.println("loss of "+result);

		}

	}


}
