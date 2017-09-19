/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Quiz1;

/**
 *
 * @author aveenashmandhwani
 */
public class mainClass 
{
    public static void main(String[] args)
    {
 LinkListClass<Integer> obj= new LinkListClass<>();
 obj.addItem(19);obj.addItem(8); obj.addItem(29);
 obj.addItem(5);obj.addItem(0);obj.addItem(19);
 obj.show();
 obj.insertAtindex(651, 3);
 
 obj.show();
 obj.sort();
 obj.show();    
 System.out.println(obj.count(19));   
    }
 
 
}
