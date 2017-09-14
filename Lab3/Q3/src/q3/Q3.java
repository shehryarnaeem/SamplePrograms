package q3;

public class Q3 {
    public static int findHijacked(LL head,LL end)
    {
        try{
            if(head==null||end==null)
            {
                throw new NullPointerException();
            }
            else{
                boolean flag=false;
                int count2=0;
                LL current=head.next;
                LL ecurrent=end;
                while(!flag||count2!=((LL.count)/2))
                {
                    if(current.data==0||ecurrent.data==0)
                    {
                        
                    }
                }
            }
        }
    }

    public static void main(String[] args) {
        LL head=new LL(-1);
        LL end=new LL(0);
       head.next=end;
       end.prev=head;
       end=end.insertAtEnd(end,1);
       end=end.insertAtEnd(end,2);
       end=end.insertAtEnd(end,3);
       end=end.insertAtEnd(end,4);
       end=end.insertAtEnd(end,5);
       end=end.insertAtEnd(end,6);
       head.display(head);
       
    }
    
}
