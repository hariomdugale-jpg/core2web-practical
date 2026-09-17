import java.util.Scanner;

class NestedDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("enter no. of rows");
		int row = s.nextInt();
		int temp = 1;


		for(int i = 0; i < row ; i++){
			for(int j = 0;j <row ;j++){
                                                                  
				if(i % 2==0){

					System.out.print((j+1)+((char)(65+j)+"		"));

				}else{
					System.out.print((row-j)+((char)(64+row-j)+"		"));
				}

				temp++;
			}
			
			
			System.out.println("\n");
		}
	}
}
