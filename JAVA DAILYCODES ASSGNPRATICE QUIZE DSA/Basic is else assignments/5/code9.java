

import java.util.Scanner;

class SwitchDemo{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);
		System.out.println("Enetr your sub1 marks ");
		int sub1 = s.nextInt();
		System.out.println("Enetr your sub2 marks ");
		int sub2 = s.nextInt();
		System.out.println("Enetr your sub3 marks ");
		int sub3 = s.nextInt();
		System.out.println("Enetr your sub4 marks ");
		int sub4 = s.nextInt();
		System.out.println("Enetr your sub5 marks ");
		int sub5 = s.nextInt();

		char grade;
		if(sub1 >= 45 && sub2 >= 45 && sub3 >= 45 && sub4 >= 45 && sub5 >= 45){

			float per = (sub1+sub2+sub3+sub4+sub5)/5 ;
			if(per > 75){

				grade = 'O';
			}else if(per <= 75 && per > 65){

				grade = 'A';
			}else if(per <= 65 && per > 45){

				grade = 'C';
			}else{

				grade = 'F';
			}


			switch(grade){

				case 'O':

					System.out.println("distiction");
					break;
				case 'A' :
					System.out.println("first");
					break;
				case 'C':
					System.out.println("second class");
					break;
				case 'F':
					System.out.println("Fail");
					break;


			}

		}else{
		System.out.println("fail");

		}


	}

}
