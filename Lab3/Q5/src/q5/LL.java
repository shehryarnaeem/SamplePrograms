/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package q5;

/**
 *
 * @author Lenovo
 */
public class LL{
    private Object data;
   public LL next;
   
  public LL()
  {
      next=null;
  }
  
  public LL(Object data1)
  {
      data=data1;
      next=null;
  }
  public LL insertAtEnd(LL head,Object data1)
    {
        try{
            if(head==null)
            {
                throw new NullPointerException("Head is Empty");
            }
            else{
                LL current=head;
                LL newNode=new LL(data1);
                while(current.next!=null)
                {
                    current=current.next;
                }
                current.next=newNode;
                return head;
            }
        }catch(NullPointerException e)
       {
           
       }
        return head;
    }
  
  public LL removeDuplicates(LL head)
  {
      try{
          if(head==null)
          {
              throw new NullPointerException("Head is empty");
          }
          else{
              LL current=head;
              //LL temp=head;
              while(current.next!=null)
              {
                  if(current.data==current.next.data)
                  {
                      current.next=current.next.next;
                  }
                  else{
                      current=current.next;
                  }
              }
              return head;
          }    
      }catch(NullPointerException e)
       {
           System.out.println(e.getLocalizedMessage());
            return head;
       }
  }
  public void display(LL head)
    {
        LL current=head;
        while(current!=null){
            System.out.println(current.data);
            current=current.next;
        }
    }
   
}
