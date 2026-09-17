import java.util.Scanner;

class IfElse{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("enter your integer as input : ");
		float x = s.nextFloat();

		if(x > 85 ){

			System.out.println(" doctor");
		}else if(x<=85 && x > 75){

			System.out.println(" enginer");
		}

	}


}
