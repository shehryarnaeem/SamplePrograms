package q4;

import java.util.logging.Level;
import java.util.logging.Logger;

public class CLL<T> implements LinkedList<T>{

    private T data;
    public CLL prev;
    public CLL next;
    private static int size;
    static{
        size=-1;
    }
    public CLL()
    {
        next=null;
        prev=null;
        ++size;
    }
    
    public CLL(T data1)
    {
        data=data1;
        next=null;
        prev=null;
        ++size;
    }
    @Override
    public CLL insertAtHead(Object head, T data) {
        CLL head1=(CLL) head;
        CLL node=new CLL(data);
        if(head1.next==null)
        {
            node.prev=head1;
            head1.next=node;
            head1.prev=node;
            node.next=head1;
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
        CLL head1=(CLL) head;
        if(head1.next==null)
        {
            head1= (CLL) head1.insertAtHead(head1,data);
        }
        else{
            CLL node=new CLL(data);
            CLL current=  head1.next;
            while(current.next!=head1)
            {
                current=current.next;
            }
            node.prev=current.next;
            current.next=node;
            node.next=head1;
            head1.prev=node;
        }
        return head1;
    }

    @Override
    public Object insertAtAny(Object head, T data, int pos) {
        CLL head1=(CLL) head;
            try{

                if(pos<=size)
                {

                    if(pos==1)
                    {
                        head1=(CLL) insertAtHead(head1, data);
                    }
                    else if(pos==size)
                    {
                        head1=(CLL) insertAtEnd(head1,data);
                    }
                    else
                    {
                        if(head1.next!=null)
                        {

                            CLL current= head1.next;
                            CLL node=new CLL(data);
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
                Logger.getLogger(CLL.class.getName()).log(Level.SEVERE, null, ex);
            }
        return head1;
    }

    @Override
    public Object deleteHead(Object head) {
        CLL head1=(CLL) head;
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
            Logger.getLogger(CLL.class.getName()).log(Level.SEVERE, null, ex);
        }
        return head1;
    }

    @Override
    public Object deleteEnd(Object head) {
        CLL head1=(CLL) head;
        try{
            if(head1.next!=null)
            {
                CLL current=head1;
                while(current.next.next!=head1)
                {
                    current=current.next;
                }
                head1.prev=current;
                current.next=head1;
                --size;
            }
            else{
                throw new LLExceptions("List is Empty");
            }
        } catch (LLExceptions ex) {
            Logger.getLogger(CLL.class.getName()).log(Level.SEVERE, null, ex);
        }
        return head1;
    }

    @Override
    public Object deleteAny(Object head, int pos) {
        CLL head1=(CLL) head;
            try{
                if(pos<=size)
                {
                    if(head1.next!=null)
                    {
                        if(pos==1)
                        {
                            head1=(CLL) head1.deleteHead(head);
                        }
                        else if(pos==size)
                        {
                            head1=(CLL) head1.deleteEnd(head);
                        }
                        else{
                            CLL current=head1.next;
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
                Logger.getLogger(CLL.class.getName()).log(Level.SEVERE, null, ex);
            }
            return head1;
    }

    @Override
    public Object reverse(Object head) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public int getSize() {
        return size;
    }

    @Override
    public void display(Object head) {
        CLL head1=(CLL) head;
        CLL current=head1.next;
        while(current!=head1)
        {
            System.out.println(current.data);
            current=current.next;
        }
    }
    /*This method is for setting the head pointer to the desired position 
    which will be beneficial for the circular movement of the CLL
    */
    public CLL setHead(CLL head,int pos)
    {
        CLL current=head;
        CLL head1=head;
        int count=0;
        while(count!=(pos-1))
        {
            current=current.next;
            ++count;
        }
        head1.next.prev=head1.prev;
        head1.prev.next=head1.next;
        current.next.prev=head1;
        head1.next=current.next;
        current.next=head1;
        head1.prev=current;
        head=head1;
        return head;
    }
    
    
}
