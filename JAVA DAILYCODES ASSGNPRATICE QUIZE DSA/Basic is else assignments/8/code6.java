import java.util.Scanner;

class NestedDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("enter no. of rows");
		int row = s.nextInt();
		int temp = row;

		for(int i = 0; i < row ; i++){
			temp = row - i;
			for(int j = 1;j <=row ;j++){
                                                                  
				System.out.print(temp+"	");
				temp += row;

			}
			System.out.println("\n");
		}
	}
}
