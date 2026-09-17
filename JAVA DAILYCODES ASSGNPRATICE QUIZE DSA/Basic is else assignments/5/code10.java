import java.util.Scanner;

class SwitchDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("what interviwer say : ");
		String str = s.nextLine();

		switch(str){

			case "you are seleted":
				System.out.println("congratulation");
				break ;
			default : 
				System.out.println("try again");
		

		}

	}

}

