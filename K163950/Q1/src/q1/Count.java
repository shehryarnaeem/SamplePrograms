/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package q1;

/**
 *
 * @author Lenovo
 * @param <T>
 */
public class Count<T> {
    private T data;
    public Count <T> nextNode;
    
    public Count()
    {
        nextNode=null;
    }
    public Count(T data1)
    {
        data= data1;
        nextNode=null;
    }
    public Count insertAtEnd(Count head,T data1)
    {
        try{
            if(head==null)
            {
                throw new NullPointerException("Head is Empty");
            }
            else{
                Count current=head;
                Count newNode=new Count(data1);
                while(current.nextNode!=null)
                {
                    current=current.nextNode;
                }
                current.nextNode=newNode;
                return head;
            }
        }catch(NullPointerException e)
       {
           
       }
        return head;
    }
    
    public int frequency(Count head,T num)
    {
        try{
            if(head==null)
            {
                throw new NullPointerException("Head is Empty");
            }
            else{
                Count current=head;
                int count=0;
                while(current!=null)
                {
                    if(current.data==num)
                    {
                        ++count;
                    }
                    current=current.nextNode;
                }
                return count;
            }
       }catch(NullPointerException e)
       {
           
       }
        return 1;
    }
    
            
}
