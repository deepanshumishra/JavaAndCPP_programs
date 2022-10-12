package codechef_lib;

import java.util.Scanner;

public class MYSERVE {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for (int i=1;i<=t;i++) {
			int p=sc.nextInt();
			int q=sc.nextInt();
			if((p+q)%4>=2) {
				System.out.println("BOB");
			}else {
				System.out.println("ALICE");
			}
		}

	}

}
//AC