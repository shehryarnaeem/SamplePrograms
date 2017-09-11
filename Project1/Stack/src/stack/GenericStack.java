/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package stack;

/**
 *
 * @author Lenovo
 */
public interface GenericStack <T>{
    public abstract boolean isEmpty();
    public abstract int getSize();
    public abstract void resize();
    public abstract boolean isFull();
    public abstract boolean push_back(T data);
    public abstract Object pop_up();
}
