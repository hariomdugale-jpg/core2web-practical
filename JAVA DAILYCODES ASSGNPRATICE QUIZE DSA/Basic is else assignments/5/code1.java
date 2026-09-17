import java.util.Scanner;

class SwitchDemo{

	public static void main(String[] args){

		System.out.println("Enter your ligth color : ");
		Scanner s = new Scanner(System.in);
		String str = s.nextLine();

		switch(str){

			case "Red":

				System.out.println("Stop ");
				break ;
			case "Green" :

				System.out.println("go ");
				break ;
			case "yellow" :

				System.out.println("wait");
				break ;
			default : 

				System.out.println("invallid color");
		

		}

	}

}

