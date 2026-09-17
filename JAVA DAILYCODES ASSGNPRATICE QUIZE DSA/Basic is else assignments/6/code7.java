
import java.util.Scanner;

class ForDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("your no .  : ");
		int N = s.nextInt();

		for(int i = 1; i <= 10 ; i++){

			System.out.println(i*N);

		}

	}

}
