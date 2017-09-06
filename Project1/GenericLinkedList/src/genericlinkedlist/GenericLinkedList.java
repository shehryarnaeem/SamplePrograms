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

    /**
     * @param args the command line arguments
     */
    interface LinkedList{
         public void display(Object head);
         public Object insertAtHead(Object head,Object data1);
         public Object insertAtEnd(Object head,Object data1);
         public Object insertAfter(Object prev,Object data1);
         public Object insertAtAny(Object head,int pos,Object data1);
         public Object deleteHead(Object head);
         public Object deleteEnd(Object head);
         public Object deleteAtAny(Object head);
         public Object reverse(Object head);
         public int getSize();
         
        }
    public  static class SLL  implements LinkedList {
        public Object data;
        public SLL next;
        static int size;
        
        static{
            size=0;
        }
        
        public SLL(Object data1)
       {
           data=data1;
           next=null;
           ++size;
       }

        public SLL() {
           next=null;
           ++size;
        }

        @Override
        public void display(Object head) {
            SLL current=(SLL) head;
                while(current!=null)
                {
                    System.out.println(current.data);
                    current=current.next;

                } 
        
        }

        @Override
        public Object insertAtHead(Object head, Object data1) {
        
            if(head!=null)
            {
                SLL node =new SLL(data1);
                node.next=(SLL) head;
                return node;
            }
            else{
                return head;
            }
        }

        @Override
        public Object insertAtEnd(Object head, Object data1) {
            if(head!=null)
            {
                SLL current=(SLL) head;
                while(current!=null)
                {
                    current=current.next;
                }
                SLL node = new SLL(data1);
                current.next=node;
                return head;
            }
            else{
                return head;
            }
        }

        
        @Override
        public Object insertAfter(Object prev, Object data1) {
            
            SLL previ=(SLL) prev;
            if(previ.next!=null)
            {
               SLL node=new SLL(data1);
               SLL nextn=previ.next;
               node.next=nextn;
               previ.next=node;
               return previ;
            }
            else{
                SLL node=new SLL(data1);
                previ.next=node;
                return previ;
                
            }
        }

        @Override
        public Object insertAtAny(Object head,int pos, Object data1) {
            if(head!=null)
            {
                if(pos==0)
                {
                  return insertAtHead(head, data1);
                }
                else if(pos==(getSize()-1))
                {
                    return insertAtEnd(head, data1);
                }
                else{
                    SLL current = (SLL) head;
                    int count =0;
                    while(count == (pos-2))
                    {
                        current=current.next;
                        ++count;
                    }
                    SLL node=new SLL(data1);
                    node=current.next;
                    current.next=node;
                    return head;
                }
                   
            }
            else{
                return head;
            }
            
        }

        @Override
        public Object deleteHead(Object head) {
            if(head==null)
            {
                return head;
            }
            else{
                SLL head1;
                head1 = (SLL) head;
                SLL newHead=head1.next;
                head1=null;
                return newHead;
            }
        }

        @Override
        public Object deleteEnd(Object head) {
            if(head!=null)
            {
                SLL current=(SLL) head;
                SLL prev=current;
                while(current.next.next!=null)
                {
                    prev=current;
                    current=current.next;
                }
                prev.next=null;
                current=null;
                return head;
            }
                
        }

        @Override
        public Object deleteAtAny(Object head) {
            throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
        }

        @Override
        public Object reverse(Object head) {
            throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
        }

        @Override
        public int getSize() {
            return size;
        }

        
    
}
    public static void main(String[] args) {
        // TODO code application logic here
        
    }
    
}
