/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package q4;

/**
 *
 * @author Lenovo
 */
public class Q4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        CLL head=new CLL(-1);
        head=(CLL) head.insertAtEnd(head,1);
        head=(CLL) head.insertAtEnd(head,2);
        head=(CLL) head.insertAtEnd(head,3);
        head=(CLL) head.insertAtEnd(head,4);
        head=(CLL) head.insertAtEnd(head,5);
        head.display(head);
    }
    
}
