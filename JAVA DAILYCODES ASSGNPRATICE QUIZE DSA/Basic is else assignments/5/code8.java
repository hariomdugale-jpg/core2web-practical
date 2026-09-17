

import java.util.Scanner;

class SwitchDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("Enetr your A no .");
		int x = s.nextInt();
		System.out.println("Enetr your B no .");
		int y = s.nextInt();

		if(x > 0 && y > 0){

			switch((x*y) % 2 ){

				case 1:

					System.out.println("number even : ");
					break;
				case 0 :
					System.out.println("number odd  ");
					break;
			}

		}else{
		System.out.println("Sorry negative numbers are not allowed");

		}


	}

}
