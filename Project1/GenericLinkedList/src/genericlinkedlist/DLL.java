/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package genericlinkedlist;

import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Lenovo
 */
public class DLL<T extends Comparable<T>> implements LinkedList<T> {
    private T data;
    public DLL prev;
    public DLL next;
    private static int size;
    static{
        size=-1;
    }
    
    public DLL()
    {
        next=null;
        prev=null;
        ++size;
    }
    
    public DLL(T data1)
    {
        data=data1;
        next=null;
        prev=null;
        ++size;
    }

    @Override
    public Object insertAtHead(Object head, T data) {
        DLL head1=(DLL) head;
        DLL node=new DLL(data);
        if(head1.next==null)
        {
            node.prev=head1;
            head1.next=node;
        }
        else{
         node.next=head1.next;
         node.prev=head1;
         head1.next.prev=node;
         head1.next=node;
        }
        return head1;
    }

    @Override
    public Object insertAtEnd(Object head, T data) {
        
        DLL head1=(DLL) head;
        if(head1.next==null)
        {
            head1= (DLL) head1.insertAtHead(head1,data);
        }
        else{
            DLL node=new DLL(data);
            DLL current=  head1.next;
            while(current.next!=null)
            {
                current=current.next;
            }
            node.prev=current.next;
            current.next=node;
        }
        return head1;
    }

    @Override
    public Object insertAtAny(Object head, T data, int pos) {
        DLL head1=(DLL) head;
        try{
            
            if(pos<=size)
            {

                if(pos==1)
                {
                    head1=(DLL) insertAtHead(head1, data);
                }
                else if(pos==size)
                {
                    head1=(DLL) insertAtEnd(head1,data);
                }
                else
                {
                    if(head1.next!=null)
                    {

                        DLL current= head1.next;
                        DLL node=new DLL(data);
                        int count=1;
                        while(count!=(pos-1))
                        {
                            current=current.next;
                            ++count;        
                        }
                        current.next.prev=node;
                        node.prev=current;
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
    }   catch (LLExceptions ex) {
            Logger.getLogger(DLL.class.getName()).log(Level.SEVERE, null, ex);
        }
        return head1;
    }

    @Override
    public DLL deleteHead(Object head) {
        DLL head1=(DLL) head;
        try{
            if(head1.next!=null)
            {
                head1.next.next.prev=head1;
                head1.next=head1.next.next;
                
                --size;
            }
            else{
                throw new LLExceptions("List is Empty");
            }
        } catch (LLExceptions ex) {
            Logger.getLogger(DLL.class.getName()).log(Level.SEVERE, null, ex);
        }
        return head1;
    }

    @Override
    public DLL deleteEnd(Object head) {
        DLL head1=(DLL) head;
        try{
            if(head1.next!=null)
            {
                DLL current=head1;
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
        DLL head1=(DLL) head;
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
                        head1=(DLL) head1.deleteEnd(head);
                    }
                    else{
                        DLL current=head1.next;
                        int count=1;
                        while(count!=(pos-1))
                        {
                            current=current.next;
                            ++count;
                        }
                        current.next.next.prev=current;
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
    public Object reverse(Object head) {
        DLL head1=(DLL) head;
        DLL newHead=new DLL(-1);
        try{
            if(head1.next!=null)
            {
                DLL current=head1.next;
                while(current!=null)
                {
                    newHead=(DLL) newHead.insertAtHead(newHead,current.data);
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

    @Override
    public int getSize() {
        return size;
    }

    @Override
    public void display(Object head) {
        DLL head1=(DLL) head;
        DLL current=head1.next;
        while(current!=null)
        {
            System.out.println(current.data);
            current=current.next;
        }
    }
    
    public DLL insertAfter(DLL head,DLL node,T data)
    {
        DLL newNode=new DLL(data);
        newNode.prev=node;
        node.next=newNode;
        return head;
    }
    
    public DLL deleteAfter(DLL head,DLL node) 
    {
        try{
            if(node.next!=null)
            {
                node.next=node.next.next;
                --size;
            }
            else{
                throw new LLExceptions("Out Of Bounds");
            }
        } catch (LLExceptions ex) {
            Logger.getLogger(DLL.class.getName()).log(Level.SEVERE, null, ex);
        }
        return head;
    }
        
        
    public DLL insertionSort(DLL head){
        int pos=2;
        int pos1;
        DLL ins=head.next.next;
        DLL current=ins.prev;
        boolean flag;
        while(ins.next!=null)
        {
            current=ins.prev;
            T temp=(T) ins.data;
            pos1=pos-1;
            flag=false;
            while(current.data.compareTo(temp)>0&&current.prev!=head)
            {
                current=current.prev;
                --pos1;
                flag=true;
                
            }
            if(current.data.compareTo(temp)>0)
            {
                head=(DLL) head.deleteAny(head,pos);

                head=(DLL) head.insertAtAny(head,temp,pos1);
            }
            
            ++pos;
            ins=ins.next;
            
            
        }
        return head;
    }
    
}
