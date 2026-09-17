import java.util.Scanner;

class IfElse{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("enter a : ");
		float a = s.nextFloat();
		System.out.println("enter b : ");
		float b = s.nextFloat();
		System.out.println("enter c : ");
		float c = s.nextFloat();

		if( c*c ==(a*a+b*b) ) {

			System.out.println("a,b,c is pythogoren triplet");
		}else {

			System.out.println("a,b,c is not pythogoren triplet");

		}

	}


}
