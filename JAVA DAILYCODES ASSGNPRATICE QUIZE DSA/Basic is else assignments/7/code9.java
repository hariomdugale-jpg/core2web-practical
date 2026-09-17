import java.util.Scanner;

class NestedForDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("Enter no. of rows : ");
		int row = s.nextInt();
	

		for(int i = 1; i <= row ; i++){

			for(int j = 0; j < row ; j++){

				System.out.print((char)(65+j)+"	");

			}
			System.out.println("\n");

		}

	}


}
