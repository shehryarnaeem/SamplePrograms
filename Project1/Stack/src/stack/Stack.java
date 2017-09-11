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
public class Stack {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        SWA ss=new SWA();
        ss.push_back(1);
        ss.push_back(2);
        Object intp=(int)ss.pop_up();
        
        
        System.out.println(intp);
    }
    
}
