

import java.util.Scanner;

class PyramidDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("Enter rows : ");
		int row = s.nextInt();
		int temp = 0;

		for(int i = 0 ; i < row ; i++){

			for(int k = 0 ; k  < row-i ; k++){

				System.out.print("		");
			}
			for(int  j = 0 ; j < 2*(i)+1; j++){

				if(i % 2 == 0){

					System.out.print((char)(65+j)+"		");
				}else{

					System.out.print((char)(97+j)+"		");
				}


			}

				System.out.print("\n\n");

		}

	}

}
