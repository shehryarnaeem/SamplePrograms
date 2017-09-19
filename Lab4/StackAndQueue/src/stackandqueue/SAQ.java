/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package stackandqueue;

/**
 *
 * @author Lenovo
 */
public interface SAQ {
    public boolean isEmpty();
    public boolean isFull();
    public Object getPeek();
    public int currentSize();
    public void resize();
}
