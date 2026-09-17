
import java.util.Scanner;

class NestedDemo{

	public static void main(String[] args){

		Scanner s= new Scanner(System.in);
		System.out.print("Enter no of rows : ");
		int row = s.nextInt();

		for(int i = row; i > 0 ; i--){

			for(int j = 0; j < row ; j++){

				System.out.print((char)(64+i)+"		");

			}

				System.out.print("\n\n");

		}

	}

}
