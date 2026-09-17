import java.util.Scanner;

class NestedForDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("Enter no. of rows : ");
		int row = s.nextInt();

		for(int i = 1; i <= row ; i++){

			for(int j = 1; j <= row ; j++){

				System.out.print(j+"	");

			}
			System.out.println("\n");

		}

	}


}
