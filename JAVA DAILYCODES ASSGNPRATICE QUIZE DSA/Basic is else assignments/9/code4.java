
import java.util.Scanner;

class NestedDemo{

	public static void main(String[] args){

		Scanner s= new Scanner(System.in);
		System.out.print("Enter no of rows : ");
		int row = s.nextInt();
		int temp = 1;

		
		for(int i = 1; i <= row ; i++){
		

			for(int j = 0; j < row ; j++){

				if(i % 2 == 0){

					System.out.print(((temp+j)*2)+"		");
				}else{
					System.out.print((j+i)+"		");

				}
			}
			if(i%2==0){

				temp++;
			}

				System.out.print("\n\n");

		}

	}

}
