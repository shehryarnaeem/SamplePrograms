
package stackandqueue;


public class StackAndQueue {

   public static void main(String[] args) {
     Stack ss=new Stack(1);
     ss.push(2);
    ss.push(3);
    System.out.println(ss.pop());
    System.out.println(ss.pop());
    System.out.println(ss.pop());
    
    
    System.out.println("Queue Implementation:");
    Queue q=new Queue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    System.out.println(q.dequeue());
    System.out.println(q.dequeue());
    System.out.println(q.dequeue());
    System.out.println(q.dequeue());
    System.out.println(q.dequeue());
       
    }
    
}
