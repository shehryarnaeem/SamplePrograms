
package q6;
class LL<T>{
    T data;
    public LL <T> node;
    static int size;
    static{
        size=0;
    }
    public LL(){
        node=null;
    }
    public LL(T data1)
    {
        data=data1;
        node=null;
        ++size;
    }
    
    public LL insertAtEnd(LL head,T data1)
    {
        try{
            if(head==null)
            {
                throw new NullPointerException("Head is Empty");
            }
            else{
                LL current=head;
                LL newNode=new LL(data1);
                while(current.node!=null)
                {
                    current=current.node;
                }
                current.node=newNode;
                return head;
            }
        }catch(NullPointerException e)
       {
           
       }
        return head;
    }
    
}


public class Q6 {

    public static LL sl(LL head)
    {
        try{
            if(head==null)
            {
                throw new NullPointerException("Head is Empty");
            }
            else{
               int sp=(int) Math.sqrt(LL.size);
               System.out.println(sp);
               int count = 0;
               LL current=head;
               LL skhead=new LL();
               skhead.data=head.data;
               LL scurrent=skhead;
               while(current!=null)
               {
                   
                   if(count==(sp+1))
                   {
                       LL newNode= new LL();
                       newNode.data=current.data;
                       scurrent.node=newNode;
                       count=0;
                       scurrent=scurrent.node;
                   }
                   else{
                   current=current.node;
                   ++count;
                   }
               }
               return skhead;
                    
            }
        }catch(NullPointerException e)
        {
            System.out.println(e.getLocalizedMessage());
            return null;
        }
    }
    public static void display(LL head)
    {
        LL current=head;
        while(current!=null){
            System.out.println(current.data);
            current=current.node;
        }
    }
    public static LL swap(LL head,Object key)
    { 
        try{
            if(head==null)
            {
                throw new NullPointerException("Head is Empty");
            }
            else{
                LL current=head;
                boolean flag=false;
                if(current.data==key)
                {
                    flag=true;
                    LL temp=current;
                    current=current.node;
                    temp.node=current.node;
                    current.node=temp;
                    head=current;
                }
                else{
                    while(!flag)
                    {
                        if(current.node.data==key)
                        {
                            if(current.node.node==null)
                            {
                                flag=true;
                                throw new NullPointerException("Next position is null");
                            }
                            else{
                                flag=true;
                                LL temp=current.node.node;
                                current.node.node=current.node.node.node;
                                temp.node=current.node;
                                current.node=temp; 
                            }
                        }

                        else{
                            current=current.node;
                        }
                    }
                }
                if(!flag)
                {
                    throw new NullPointerException("Not Found");
                }
                else{
                    return head;
                }
            }
        }catch(NullPointerException e)
        {
            System.out.println(e.getLocalizedMessage());
            return null;
        }
    }
    public static void main(String[] args) {
        LL head=new LL(1);
        head=head.insertAtEnd(head, 2);
        head=head.insertAtEnd(head, 3);
        head=head.insertAtEnd(head, 4);
        head=head.insertAtEnd(head, 5);
        head=head.insertAtEnd(head, 6);
        head=head.insertAtEnd(head, 7);
        head=head.insertAtEnd(head, 8);
        head=head.insertAtEnd(head, 9);
        head=swap(head,1);
        display(head);
        
    }
    
}
