
import java.util.Scanner;

class NestedDemo{

	public static void main(String[] args){

		Scanner s= new Scanner(System.in);
		System.out.print("Enter no of rows : ");
		int row = s.nextInt();

		int temp = row*row;
		for(int i = 0; i < row ; i++){
			
			for(int j = 0; j < row ; j++){
					
				if(i % 2==0){
					System.out.print((char)(row - j +64)+"		");

				}else{
					System.out.print((j+1)+"		");

				}
			}

				System.out.print("\n\n");

		}

	}

}
