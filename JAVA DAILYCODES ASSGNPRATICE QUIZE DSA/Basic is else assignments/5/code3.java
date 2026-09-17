import java.util.Scanner;

class SwitchDemo{

	public static void main(String[] args){

		System.out.println("Enter your cloth size : ");
		Scanner s = new Scanner(System.in);
		String str = s.nextLine();

		switch(str){

			case "S":

				System.out.println("small");
				break ;
			case "XL" :

				System.out.println("Extra Large ");
				break ;
			case "L" :

				System.out.println("Large");
				break ;
			case "M":
				System.out.println("Medium");
				break ;
			default : 

				System.out.println("Invalide size");
		

		}

	}

}

