
import java.util.Scanner;

class NestedDemo{

	public static void main(String[] args){

		Scanner s= new Scanner(System.in);
		System.out.print("Enter no of rows : ");
		int row = s.nextInt();

		for(int i = 1; i <= row ; i++){
			int temp = i;

			for(int j = 0; j < row ; j++){

				System.out.print(temp+"		");
				temp += 4;
			}

				System.out.print("\n\n");

		}

	}

}
