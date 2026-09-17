import java.util.Scanner;

class NestedDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("enter no. of rows");
		int row = s.nextInt();
		int temp = 1;


		for(int i = 1; i <= row ; i++){
			for(int j = 0;j <row ;j++){
                        	if(i % 3 == 0){ 
				
					System.out.print("@		");
				}else if(i % 2==0){

					System.out.print("$		");

				}else{
					System.out.print("#		");
				}

			
			}
			
			
			System.out.println("\n");
		}
	}
}
