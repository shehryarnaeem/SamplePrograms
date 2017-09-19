/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package q3;

/**
 *
 * @author Lenovo
 */
public interface LinkedList<T> {
    public abstract Object insertAtHead(Object head,T data);
    public abstract Object insertAtEnd(Object head ,T data);
    public abstract Object insertAtAny(Object head,T data,int pos);
    public abstract Object deleteHead(Object head);
    public abstract Object deleteEnd(Object head);
    public abstract Object deleteAny(Object head,int pos);
    public abstract Object reverse(Object head);
    public abstract int getSize();
    public abstract void display(Object head);
}
