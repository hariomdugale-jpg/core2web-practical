import java.util.Scanner;

class TriangleDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.print("Enter no of rows : ");
		int row = s.nextInt();

		int temp =1;


		for(int i = 0; i < row ; i++){

			for(int j = 0 ; j <= i ; j++ ){

				System.out.print(temp+"		");
				temp++;
			}

				System.out.print("\n\n");

		}

	}

}
