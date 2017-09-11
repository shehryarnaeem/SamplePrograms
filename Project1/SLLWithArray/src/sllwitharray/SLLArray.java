/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sllwitharray;

import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Lenovo
 */
public class SLLArray {
   public int data;
   int nextpos;
   static int count;
   static
   {
       count=0;
   }
   public SLLArray()
   {
       ++count;
   }
   public SLLArray(int data1)
   {
       data=data1;
       
       
   }
  
   public void insertAtHead(int keys[],SLLArray SLL[],int data)
   {
       try{
           if(SLL[0].nextpos==0)
           {
               SLL[1]=new SLLArray(data);
               SLL[0].nextpos=1;
               keys[1]=1;
               ++count;
           }
           else 
           {
               if(count<1000){
                  ++count;
                  SLL[count]=new SLLArray(data);
                  keys[2]=
                  keys[1]=count;
               }
               else{
                   throw new SLLException("List is full");
               }
           }
           
       } catch (SLLException ex) {
           Logger.getLogger(SLLArray.class.getName()).log(Level.SEVERE, null, ex);
       }
       
   }
   public void display(SLLArray SLL[],int keys[])
   {
       
       for(int i=1;i<count;i++)
       {
           System.out.println(SLL[keys[i]].data);
       }
   }
}
