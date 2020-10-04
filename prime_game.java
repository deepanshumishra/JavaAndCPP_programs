/*
Two friends who are good in mathematics and one of them challenged the other one to find the
Prime Number in a given range say " A " and " B " , here A & B are the range
, but it seems easy to solve , so he twisted the question and 
said print Prime Number Pair whose multiplication comes in between
(A * B) and (A/2 * B/2).
*/

import java.util.*;
class MyClass {
    public static void main(String args[]) {
        Scanner sa = new Scanner(System.in);
        int A = sa.nextInt();    
        int B = sa.nextInt();
        List<Integer> list = new ArrayList<>();
        for(int i = A; i <= B; i++){
            int count = 0;
            for(int j = 2; j <= Math.sqrt(i); j++){
                if(i % j == 0)
                    count++;
            }
            if(count == 0)
                list.add(i);
        }
        int p2 = A * B;
        int p1 = (A/2) * (B/2);
        for(int i = 0; i < list.size(); i++){
            int P = list.get(i);
            for(int j = i + 1; j < list.size(); j++){
                int multplier = P * list.get(j);
                if((p1 <= multplier) && (multplier <= p2))
                    System.out.println(P + "," + list.get(j));
            }
        }
    }
}