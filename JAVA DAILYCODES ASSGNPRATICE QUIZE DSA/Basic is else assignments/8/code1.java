import java.util.Scanner;

class NestedDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("enter no. of rows");
		int row = s.nextInt();
		int tem = 1;
		for(int i = 0; i < row ; i++){

			for(int j = 1;j <= row;j++){

				System.out.print(tem+"	");
				if(j != row){

					tem++;

				}
			}
			System.out.println("\n");
			

		}


	}
}
