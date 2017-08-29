/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package linkedlist;

import java.util.Scanner;

/**
 *
 * @author Lenovo
 */
public class LinkedList {

    /**
     * @param args the command line arguments
     */
public static class SLL {
    int data;
    public SLL next=null;
      public SLL(int data1)
       {
           data =data1;
       }

        public SLL() {
           
        }
       
    }
    public static void display(SLL head)
       {
           SLL current=new SLL();
           current=head;
           while(current!=null)
           {
               System.out.println(current.data);
               current=current.next;
           }
       }
    public static void insertLast(SLL head)
    {
        System.out.print("Enter the data: ");
        Scanner intInp=new Scanner(System.in);
        int data1=intInp.nextInt();
        SLL newNode=new SLL(data1);
        SLL current=head;
        while(current.next!=null)
        {
            current=current.next;
        }
        current.next=newNode;
        
        
    }
    public static SLL insertHead(SLL head)
    {
        System.out.print("Enter the data: ");
        Scanner intInp=new Scanner(System.in);
        int data1=intInp.nextInt();
        SLL newNode=new SLL(data1);
        SLL current=head;
        newNode.next=current;
        head=newNode;
        return head;
    }
    public static void insertAny(SLL head,int pos)
    {
        System.out.print("Enter the data: ");
        Scanner intInp=new Scanner(System.in);
        int data1=intInp.nextInt();
        SLL newNode=new SLL(data1);
        SLL current=head;
        int count=0;
        while(count!=pos)
        {
            current=current.next;
            ++count;
        }
        newNode.next=current.next;
        current.next=newNode;
        
    }
    public static void main(String[] args) {
        // TODO code application logic here
        SLL head=new SLL(10);
        display(head);
        
                
        insertLast(head);
        head=insertHead(head);
        insertLast(head);
        insertAny(head,0);
        display(head);
    }
    
}
