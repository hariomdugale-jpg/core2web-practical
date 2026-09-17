import java.util.Scanner;

class NestedDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("enter no. of rows");
		int row = s.nextInt();

		for(int i = 0; i < row ; i++){
			for(int j = row;j >=1 ;j--){

				System.out.print((char)(j+64)+"	");

			}
			System.out.println("\n");
		}
	}
}
