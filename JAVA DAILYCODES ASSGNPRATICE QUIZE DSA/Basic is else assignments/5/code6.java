import java.util.Scanner;

class SwitchDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		int x;
		System.out.println("Enter your  no. : ");
		x = s.nextInt();

		switch(x){

			case 0:
				System.out.println("zero");
				break ;
			case 1:
				System.out.println("one");
				break ;
			case 2:
				System.out.println("two");
				break ;
			case 3 :
				System.out.println("three");
				break ;
			case 4:
				System.out.println("four");
				break ;
			case 5:
				System.out.println("five");
				break ;
			default : 
				System.out.println("number is greter than 5");
		

		}

	}

}

