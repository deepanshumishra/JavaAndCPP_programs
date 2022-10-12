package codechef_lib;

import java.util.Scanner;

public class MODULO3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for (int i=1;i<=t;i++) {
			int a = sc.nextInt();
			int b = sc.nextInt();
			if(a%3==0 || b%3==0) {
				System.out.println(0);
			}else if(a%3==b%3 && b%3!=0) {
				System.out.println(1);
			}else if(a%3!=b%3 && a%3!=0 && b%3!=0) {
				System.out.println(2);
			}
		}

	}

}
//AC