
import java.util.Scanner;

class SpaceDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.print("Enter rows : ");
		int row = s.nextInt();

		for(int i = 0 ; i < row ; i++){

			for(int k = 0 ; k < row - i - 1; k++){

				System.out.print("		");
			}

			for(int j = 0; j <= i ; j++){

				System.out.print(row*(j+1)+"		");


			}

				System.out.print("\n\n");

		}

	}

}
