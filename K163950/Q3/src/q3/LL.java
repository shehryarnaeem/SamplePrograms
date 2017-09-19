/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package q3;

/**
 *
 * @author Lenovo
 */
public class LL {
     Object data;
   public LL next;
   public LL prev;
   static int count;
   static{
       count=-1;
   }
  public LL()
  {
      next=null;
      prev=null;
  }
  
  public LL(Object data1)
  {
      data=data1;
      prev=null;
      next=null;
      ++count;
  }
  public LL insertAtEnd(LL end,Object data1)
    {
        try{
            if(end==null)
            {
                throw new NullPointerException("Head is Empty");
            }
            else{
                LL current=end;
                LL newNode=new LL(data1);
                newNode.prev=current;
                current.next=newNode;
                end=current.next;
                return end;
            }
        }catch(NullPointerException e)
       {
          System.out.println(e.getLocalizedMessage());
        return end;   
       }
        
    }
  public void display(LL head)
    {
        LL current=head.next;
        while(current!=null){
            System.out.println(current.data);
            current=current.next;
        }
    }
}
