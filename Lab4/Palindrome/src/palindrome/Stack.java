
package palindrome;

public class Stack <T>implements SAQ{
    private LL <T>head;
    public static int Tsize;
    public static int currentSize;
    static{
        Tsize=1000;
        currentSize=0;
    }
    
    public Stack(T data)
    {
        head=new LL(data);
        ++currentSize;
    }

    @Override
    public boolean isEmpty() {
        return currentSize == 0;
    }

    @Override
    public boolean isFull() {
        return currentSize == Tsize;
    }

    @Override
    public T getPeek() {
     
     if(currentSize>0)
     {
        return head.data; 
     }
     else{
         return null;
     }
    }

    @Override
    public void resize() {
        Tsize*=2;
    }

    @Override
    public int currentSize() {
        return currentSize;
    }
    
    public void push(Object data)
    {
        if(isFull())
        {
           resize();
        }
        
        LL node=new LL(data);
            node.next=head;
            head=node;
            ++currentSize;
    }
    
    public T pop()
    {
        try{
            if(isEmpty())
            {
                throw new NullPointerException("Underflow");
            }
            else{
                LL temp=head;
                head=head.next;
                --currentSize;
                return (T) temp.data;
            }
        }catch(NullPointerException e)
        {
            System.out.println(e.getLocalizedMessage());
        }
        return null;
    }
}
