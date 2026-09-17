import java.util.Scanner;

class IfElse{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("enter your integer as input : ");
		char x = s.next().charAt(0);

		if(x == 'A' || x == 'E' || x =='I' || x=='O' || x == 'U' || x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ){

			System.out.println(x+" is vowels");
		}else{

			System.out.println(x+" is consonents ");

		}

	}


}
