package codechef_lib;

import java.util.Arrays;
import java.util.Scanner;

public class MXMODSUM {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for (int i=1;i<=t;i++) {
			int n = sc.nextInt();
			long m =sc.nextLong();
			long arr[] = new long[n];
			long ans=0;
			for(int j=0;j<n;j++) {
				arr[j]=sc.nextLong();
			}
			Arrays.sort(arr);
			for(int j=0;j<n;j++) {
				ans=Math.max(ans,arr[j]+arr[n-1]+((arr[j]-arr[n-1])%m+m)%m);
			}
			System.out.println(ans);
		}

	}

}
//Accepteed