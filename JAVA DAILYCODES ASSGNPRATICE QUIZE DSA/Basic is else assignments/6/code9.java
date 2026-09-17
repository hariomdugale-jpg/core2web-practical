
import java.util.Scanner;

class ForDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("your no .  : ");
		int N = s.nextInt();
		int sum = 0;

		for(int i = 1; i <= N ; i++){

			sum += i;
		}

		System.out.println(sum);

	}

}
