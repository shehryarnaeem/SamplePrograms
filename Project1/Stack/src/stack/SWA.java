/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package stack;

import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Lenovo
 */
public class SWA<T> implements GenericStack<T> {
    
    private Object []stackdata;
    private static int size;
    private static int count;
    static{
        size=1000;
        count=0;
    }
    
    public SWA()
    {
        stackdata=new Object[1000];
    }

    @Override
    public boolean isEmpty() {
        if(count==0)
        {
            return true;
        }
        else{
            return false;
        }
    }

    @Override
    public int getSize() {
        return size;
    }

    @Override
    public void resize() {
        Object newstack[]=new Object[size*2];
        for(int i=0;i<size;i++)
        {
            newstack[i]=stackdata[i];
        }
        size*=2;
        stackdata=newstack;
    }

    @Override
    public boolean isFull() {
        if(stackdata.length==(size-1))
        {
            return true;
        }
        else{
            return false;
        }
    }

    @Override
    public boolean push_back(T data) {
        boolean flag = false;
        try{
            
            if(isFull()==true)
            {
                flag=false;
                throw new StackException("Stack is Full");
                
            }
            else{
                stackdata[count]=(T) data;
                ++count;
                flag=true;
            }
        } catch (StackException ex) {
            Logger.getLogger(SWA.class.getName()).log(Level.SEVERE, null, ex);
        }
        return flag;
    }

    @Override
    public Object pop_up() {
       Object data = null;
        try{
            
            if(isEmpty()==true)
            {
                data=null;
                throw new StackException("Stack is Empty");   
            }
            else{
                --count;
                data= stackdata[count];
                
                
            }
        } catch (StackException ex) {
            Logger.getLogger(SWA.class.getName()).log(Level.SEVERE, null, ex);
        }
        return data;
    }
    
}
