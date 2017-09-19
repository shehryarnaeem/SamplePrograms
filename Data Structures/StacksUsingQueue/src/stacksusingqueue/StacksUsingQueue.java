
package stacksusingqueue;

import java.util.LinkedList;
import java.util.Queue;


public class StacksUsingQueue {
    
    private static Queue push(Integer x,Queue<Integer> q1){
       Queue <Integer> q2=new LinkedList<>(); 
       q2.add(x);
       
       while(!q1.isEmpty())
       {
           q2.add(q1.remove());
       }
       q1=q2;
       return q1;
    }
    public static void main(String[] args) {
       Queue <Integer> q1=new LinkedList<>();
      q1= push(1, q1);
       q1=push(2, q1);
       q1=push(3, q1);
      q1= push(4, q1);
       
       System.out.println(q1.remove());
       System.out.println(q1.remove());
    }
    
}
