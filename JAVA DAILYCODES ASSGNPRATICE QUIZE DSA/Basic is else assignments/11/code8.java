
import java.util.Scanner;

class SpaceDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.print("Enter rows : ");
		int row = s.nextInt();

		for(int i = 0 ; i < row ; i++){

			for(int k = 0 ; k < i; k++){

				System.out.print("		");
			}

			for(int j = 0; j < row - i ; j++){

				System.out.print((j+1+i)+"		");
			}

				System.out.print("\n\n");

		}

	}

}
