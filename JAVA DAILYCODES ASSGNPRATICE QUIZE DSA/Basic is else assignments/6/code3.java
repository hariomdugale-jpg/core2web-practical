
import java.util.Scanner;

class ForDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("your no .  : ");
		int N = s.nextInt();

		int x = 100;
		for(int i = 0; i < N ; i++){

			System.out.println(i+x);

		}

	}

}
