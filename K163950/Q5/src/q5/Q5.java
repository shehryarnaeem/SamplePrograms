/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package q5;

/**
 *
 * @author Lenovo
 */
public class Q5 {

    /**
     * @param args the command line arguments
     */
    
    public static void main(String[] args) {
        // TODO code application logic here
        LL head=new LL(1);
        head=head.insertAtEnd(head,1);
        head=head.insertAtEnd(head,1);
        head=head.insertAtEnd(head,1);
        head=head.insertAtEnd(head,1);
        head=head.insertAtEnd(head,1);
        head=head.insertAtEnd(head,1);
        head=head.insertAtEnd(head,2);
        head=head.insertAtEnd(head,2);
        head=head.insertAtEnd(head,3);
        head=head.removeDuplicates(head);
        head.display(head);   
}
    
}