import java.util.Scanner;

class IfElse{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("enter your integer as input : ");
		float x = s.nextFloat();

		if(x % 6 == 0){

			System.out.println(x+" is divisiable by the 6");
		}else {

			System.out.println(x + " is not divisiable by the 6");
		}

	}


}
