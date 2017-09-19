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
public class LinkListClass<T extends Comparable <T>> {
    Node head;
    Node end;
    int size;
    public LinkListClass()
    {
    head=null; end=null; size=0;
    }
    
    public void addItem(T valu)
    {
     Node  <T> value= new Node<>();
     value.addData(valu);
     value.setNext(head);
     head= value; size++;
    }
    
    public Node removeItem()
    {
    if (size>0)
    {
    Node<T> temp;
    temp=head;
     
    head= head.returnNext();
    size--;
    return temp;
    }
    else
    return null;
   
    }
    
    public void insertAtindex(T valu, int index)
    {
     Node    <T> value= new Node<>();
     value.addData(valu);
     
    if (index<=size)
    {
    Node<T> temp;
    temp=head; int count=1;
    
    while(count!=index-1&& index!=1)
    {
    temp=temp.returnNext();
    count++;
    }
    Node <T> temp2;
    temp2= value;
    temp2.setNext(temp.returnNext());
    temp.setNext(temp2);
    size++;
    }
    }
    
    public int count(T value)
    {
    if(size>0)
    {
    Node<T> temp;int count=0; temp=head;
    while(temp!=null)
    {
    if(temp.returnData()==value)
        count++;
    temp= temp.returnNext();
    }
    return count;
    }
    else
    {
     System.out.println("\nWe did not find your desired number in list!");
     return -1;      
    }
    }
    
    public void sort()
    {
    if(size>0)
    {
    Node <T> temp, temp2;
    temp= head;
    for(int i=0; i<size; i++)
    {
    for(int j=0; j<size-1; j++)
    {temp2=temp.returnNext();
    if(temp.returnData().compareTo(temp2.returnData())>0)
    {
    T temp3;
    temp3= temp.returnData();
    temp.addData(temp2.returnData());
    temp2.addData(temp3);
    
    }
    temp= temp.returnNext();
    }
    temp=head;
    }
    
    }
    }
    
    public void show()
    {if(size>0)
    {
    Node <T> temp;
    temp=head;
    while(temp!=null)
    {
    System.out.println("\n"+temp.returnData());
    temp= temp.returnNext();
    }
    }
    else
    System.out.println("Link list empty");    }
    }
    
    
    

