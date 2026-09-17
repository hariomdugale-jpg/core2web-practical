import java.util.Scanner;

class SwitchDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		int x,y;
		System.out.println("Enter your no. A as  interger : ");
		x = s.nextInt();
		System.out.println("Enter your no. B as  interger : ");
		y = s.nextInt();

		System.out.println(" enter your operatio  tha  you eant to do :  ");
		char ch = s.next().charAt(0);


		switch(ch){

			case '+':
				System.out.println("Addition is : "+(x+y));
				break ;
			case '-':
				System.out.println("Subtraction is :  "+(x-y));
				break ;
			case '*' :
				System.out.println("Multiplication is : "+(x*y));
				break ;
			case '/':
				System.out.println("Division is : "+(x/y));
				break ;
			default : 
				System.out.println("Invalide operation");
		

		}

	}

}

