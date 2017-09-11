/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sllwitharray;

/**
 *
 * @author Lenovo
 */
public class SLLWithArray {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        SLLArray   []node;
        node = new SLLArray[1000];
        int []keys=new int[1000];
       node[0]=new SLLArray(-1);
        keys[0]=0;
        node[0].insertAtHead(keys, node, 2);
        node[0].insertAtHead(keys, node, 3);
        node[0].display(node, keys);
        
    }
    
}
