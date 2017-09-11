/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package genericlinkedlist;

/**
 *
 * @author Lenovo
 */
public class GenericLinkedList {
    public static void main(String args[])
    {
        Integer a;
        a = new Integer(1);
        DLL head=new DLL(-1);
        head=(DLL) head.insertAtHead(head, a);
        head=(DLL) head.insertAtEnd(head, 2);
        head=(DLL) head.insertAtHead(head, 3);
        head=(DLL) head.insertAtHead(head, 4);
        head=(DLL) head.insertAtAny(head, 0, 3);
        head.display(head);
       
        System.out.println("Changing head:");
        head=head.insertionSort(head);
        head.display(head);
        
    }
    
}
