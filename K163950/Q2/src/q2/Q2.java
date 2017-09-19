package q2;

 class LL <T>{
        T data;
       public  LL <T> node;
       static int size;
       static{
           size=-1;
       }
       LL()
       {
           node=null;
       }
       
       LL(T data1)
       {
           node=null;
           data=data1;
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
public class Q2 {

    public static <T> T getNth(LL head,int pos)
    {
        try{
            if(head==null)
            {
                throw new NullPointerException("Head is Empty");
            }
            else if(pos>LL.size){
                throw new NullPointerException("Position is invalid");
            }
            else{
                int count=0;
                LL current=head;
                while(count!=pos)
                {
                    current=current.node;
                    ++count;
                }
                return (T) current.data;
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
        Integer n=getNth(head,3);
        System.out.println(n);
        
    }
    
}
