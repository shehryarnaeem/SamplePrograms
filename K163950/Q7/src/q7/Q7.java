/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package q7;

/**
 *
 * @author Lenovo
 */
public class Q7 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        SLL head=new SLL(-1);
        head=head.insertAtEnd(head, 2);
        head=head.insertAtEnd(head, 3);
        head=head.insertAtEnd(head, 4);
        head=head.insertAtEnd(head, 5);
        head=head.insertAtEnd(head, 6);
        head=head.insertAtEnd(head, 7);
        head=head.insertAtEnd(head, 8);
        head=head.insertAtEnd(head, 9);
        head=(SLL) head.reverse(head);
        head.display(head);
    }
    
}
