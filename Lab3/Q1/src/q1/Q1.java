/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package q1;

/**
 *
 * @author Lenovo
 */
public class Q1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Count head=new Count(1);
        head=head.insertAtEnd(head, 2);
        head=head.insertAtEnd(head, 2);
        head=head.insertAtEnd(head, 2);
        head=head.insertAtEnd(head, 2);
        int count=head.frequency(head, 2);
        System.out.println(count);
    }
    
}
