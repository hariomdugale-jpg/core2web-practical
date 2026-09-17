import java.util.Scanner;

class NestedDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("enter no. of rows");
		int row = s.nextInt();

		for(int i = 0; i < row ; i++){
			for(int j = 1;j <=row ;j++){

				System.out.print((j+i)+"	");

			}
			System.out.println("\n");
		}
	}
}
