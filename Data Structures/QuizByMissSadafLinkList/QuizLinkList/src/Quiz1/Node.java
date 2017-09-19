/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Quiz1;

/**
 *
 * @author aveenashmandhwani
 * @param <T>
 */
public class Node<T> {
     private Node next;
     private T data;
    
     public void addData(T va)
    {
    data=va;
    }
    
     public T returnData()
    {
    return data;
    }
    
     public void setNext(Node va)
    {
    next=va;
    }
     
     public Node returnNext()
    {
    return next;
    }       
    
}
