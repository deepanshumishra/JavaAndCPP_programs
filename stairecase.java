import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        
        int i,j,k,n = sc.nextInt();
        
        for(i=0;i<n;i++){
          
            for(j=n-1;j>i;j--){
                System.out.print(" ");
            }
            for(k=0;k<=i;k++)
                System.out.print("#");
           System.out.println(); 
        }
        
    }
}