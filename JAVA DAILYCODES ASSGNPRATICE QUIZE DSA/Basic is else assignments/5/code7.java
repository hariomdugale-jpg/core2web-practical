import java.util.Scanner;

class SwitchDemo{

	public static void main(String[] args){

		System.out.println("Enter your subscription : ");
		Scanner s = new Scanner(System.in);
		String str = s.nextLine();

		switch(str){

			case "Platinum":
				System.out.println("$799");
				break ;
			case "Gold" :
				System.out.println("$599");
				break ;
			case "Silver" :
				System.out.println("$399");
				break ;
			case "Bronze":
				System.out.println("$199");
				break ;
			case "free":
				System.out.println("$00");
				break ;
			default : 

				System.out.println("no such subscription present here ");
		

		}

	}

}

