/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package q7;

import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Lenovo
 */
public class SLL<T> implements LinkedList<T> {
    private T data;
    public SLL next;
    private static int size;
    static{
        size=-1;
    }
    SLL()
    {
        
        next=null;
        ++size;
    }
    
    SLL(T data1){
        data=data1;
        next=null;
        ++size;
    }
    
          

    @Override
    public SLL insertAtHead(Object head, T data) {
        SLL head1=(SLL) head;
        SLL node=new SLL(data);
        if(head1.next==null)
        {
            head1.next=node;
        }
        else{
         node.next=head1.next;
         head1.next=node;
        }
        return head1;
    }

    @Override
    public SLL insertAtEnd(Object head, T data) {
        SLL node=new SLL(data);
        SLL head1=(SLL) head;
        if(head1.next==null)
        {
            head1.next=node;
        }
        else{
            SLL current=  head1.next;
            while(current.next!=null)
            {
                current=current.next;
            }
            current.next=node;
        }
        
        return head1;
    }

    @Override
    public SLL insertAtAny(Object head, T data,int pos) {
        SLL head1=(SLL) head;
        try{
            
        if(pos<=size)
        {
           
            if(pos==1)
            {
                head1=insertAtHead(head1, data);
            }
            else if(pos==size)
            {
                head1=insertAtEnd(head1,data);
            }
            else
            {
                if(head1.next!=null)
                {
                    
                    SLL current= head1.next;
                    SLL node=new SLL(data);
                    int count=1;
                    while(count!=(pos-1))
                    {
                        current=current.next;
                        ++count;        
                    }
                    node.next=current.next;
                    current.next=node;
                    
                }
                else
                {
                    throw new LLExceptions("Head is null");
                }
            }
        }
        else{
            throw new LLExceptions("List out of bounds");
        }
    }
        catch(LLExceptions e)
        {
         e.printStackTrace();
        }
        return head1;
   }

    @Override
    public SLL deleteHead(Object head) {
        SLL head1=(SLL) head;
        try{
            if(head1.next!=null)
            {
                head1.next=head1.next.next;
                --size;
            }
            else{
                throw new LLExceptions("List is Empty");
            }
        } catch (LLExceptions ex) {
            ex.printStackTrace();
        }
        return head1;
    }

    @Override
    public Object deleteEnd(Object head) {
        SLL head1=(SLL) head;
        try{
            if(head1.next!=null)
            {
                SLL current=head1;
                while(current.next.next!=null)
                {
                    current=current.next;
                }
                current.next=null;
                --size;
            }
            else{
                throw new LLExceptions("List is Empty");
            }
        } catch (LLExceptions ex) {
            Logger.getLogger(SLL.class.getName()).log(Level.SEVERE, null, ex);
        }
        return head1;
    }

    @Override
    public Object deleteAny(Object head, int pos) {
        SLL head1=(SLL) head;
        try{
            if(pos<=size)
            {
                if(head1.next!=null)
                {
                    if(pos==1)
                    {
                        head1=head1.deleteHead(head);
                    }
                    else if(pos==size)
                    {
                        head1=(SLL) head1.deleteEnd(head);
                    }
                    else{
                        SLL current=head1.next;
                        int count=1;
                        while(count!=(pos-1))
                        {
                            current=current.next;
                            ++count;
                        }
                        current.next=current.next.next;
                        --size;
                    }
                    
                }
                else{
                    throw new LLExceptions("List is Empty");
                }
            }
            else{
                throw new LLExceptions("Out of Bounds");
            }
        } catch (LLExceptions ex) {
            Logger.getLogger(SLL.class.getName()).log(Level.SEVERE, null, ex);
        }
        return head1;
    }

    @Override
    public int getSize() {
        return size;
    }

    @Override
    public void display(Object head) {
        SLL head1=(SLL) head;
        SLL current=(SLL) head1.next;
        while(current!=null)
        {
            System.out.println(current.data);
            current=current.next;
        }
    }

    @Override
    public Object reverse(Object head) {
        SLL head1=(SLL) head;
        SLL newHead=new SLL(-1);
        try{
            if(head1.next!=null)
            {
                SLL current=head1.next;
                while(current!=null)
                {
                    newHead=newHead.insertAtHead(newHead,current.data);
                    current=current.next;
                }
                
            }
            else{
                throw new LLExceptions("List is empty");
                
            }
        } catch (LLExceptions ex) {
            Logger.getLogger(SLL.class.getName()).log(Level.SEVERE, null, ex);
        }
        return newHead;
    }
       
    
}
