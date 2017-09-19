package q3;

public class Q3 {
    public static boolean findHijacked(LL head,LL end)
    {
        boolean flag=false;
        try{
            if(head==null||end==null)
            {
                throw new NullPointerException();
                //return flag
            }
            else{
                
                int count2=0;
                LL current=head.next;
                LL ecurrent=end;
                while(!flag||count2!=((LL.count)/2))
                {
                    if(current.data.equals(0)||ecurrent.data.equals(0))
                    {
                        flag=true;
                    }
                    else{
                        current=current.next;
                        end=end.prev;
                    }
                    ++count2;
                }
            }
        }catch(NullPointerException e)
       {
          System.out.println(e.getLocalizedMessage());
           
       }
        return flag;
    }
    
    public static boolean findmem(LL head,LL end)
    {
        boolean flag=false;
        try{
            if(head==null||end==null)
            {
                throw new NullPointerException();
                //return flag
            }
            else{
                
                int count2=0;
                LL current=head.next;
                LL ecurrent=end;
                while(!flag||count2!=((LL.count)/2))
                {
                    if(current.data.equals(1)||ecurrent.data.equals(1))
                    {
                        flag=true;
                    }
                    else{
                        current=current.next;
                        end=end.prev;
                    }
                    ++count2;
                }
            }
        }catch(NullPointerException e)
       {
          System.out.println(e.getLocalizedMessage());
           
       }
        return flag;
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
        System.out.println(findHijacked(head,end));
        System.out.println(findmem(head,end));
      // head.display(head);
       
    }
    
}
