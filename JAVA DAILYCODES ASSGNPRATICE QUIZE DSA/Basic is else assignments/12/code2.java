

import java.util.Scanner;

class PyramidDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("Enter rows : ");
		int row = s.nextInt();
		int temp = 1;

		for(int i = 0 ; i < row ; i++){

			for(int k = 0 ; k  < row-i ; k++){

				System.out.print("		");
			}
			for(int  j = 0 ; j < 2*(i)+1; j++){

				System.out.print(temp+"\t\t");
				temp++;


			}

				System.out.print("\n\n");

		}

	}

}
