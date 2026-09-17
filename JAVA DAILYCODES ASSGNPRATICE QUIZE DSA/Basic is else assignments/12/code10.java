

import java.util.Scanner;

class PyramidDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("Enter rows : ");
		int row = s.nextInt();
		int temp = 1;

		for(int i = 0 ; i < row ; i++){

			for(int k = 0 ; k  < i ; k++){

				System.out.print("		");
			}
			for(int  j = 0 ; j < 2*(row-i-1)+1; j++){
					System.out.print((char)(row+64-i)+"		");
					
				


			}

				System.out.print("\n\n");

		}

	}

}
