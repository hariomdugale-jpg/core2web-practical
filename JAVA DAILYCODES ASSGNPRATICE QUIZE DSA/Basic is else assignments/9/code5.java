
import java.util.Scanner;

class NestedDemo{

	public static void main(String[] args){

		Scanner s= new Scanner(System.in);
		System.out.print("Enter no of rows : ");
		int row = s.nextInt();

		int temp = 1;
		for(int i = 1; i <= row ; i++){
			

			for(int j = 0; j < row ; j++){

				if(temp % 2 == 0){
					System.out.print((temp*temp)+"		");
				}else{

					System.out.print((temp*temp*temp)+"		");
				}
				temp++;
			}

				System.out.print("\n\n");

		}

	}

}
