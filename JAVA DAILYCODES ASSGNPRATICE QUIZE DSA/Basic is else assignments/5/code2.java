import java.util.Scanner;

class SwitchDemo{

	public static void main(String[] args){

		System.out.println("Enter your grade : ");
		Scanner s = new Scanner(System.in);
		String str = s.nextLine();

		switch(str){

			case "O":

				System.out.println("outstanding");
				break ;
			case "A++" :

				System.out.println("Exellent ");
				break ;
			case "A" :

				System.out.println("good");
				break ;
			default : 

				System.out.println("bad");
		

		}

	}

}

