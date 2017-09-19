
package stackandqueue;

public class Queue implements SAQ{
    private LL head;
    private LL end;
    private static int Tsize;
    private static int currentSize;
    
    static{
        Tsize=1000;
        currentSize=0;
    }
    
    public Queue(Object data)
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
    public Object getPeek() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    
    }

    @Override
    public int currentSize() {
        return currentSize;
    }

    @Override
    public void resize() {
        Tsize*=2;
    }
    public void enqueue(Object data){
        if(isFull())
        {
            resize();
        }
        LL node=new LL(data);
        if(head.next==null)
        {
            head.next=node;
            end=node;
        }
        else{
            end.next=node;
            end=end.next;
        }
    }
    
    public Object dequeue()
    {
        try{
            if(isEmpty())
            {
                throw new NullPointerException("Underflow");
            }
            else{
                LL temp=head;
                head=head.next;
                return temp.data;
            }
        }catch(NullPointerException e)
        {
            System.err.println(e.getLocalizedMessage());
        }
        return null;
    }
    
}
