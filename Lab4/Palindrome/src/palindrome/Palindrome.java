/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package palindrome;

import java.util.Scanner;

/**
 *
 * @author Lenovo
 */
public class Palindrome {

    public static boolean check(String ss)
    {
        Stack<Character>  s;
        s = new Stack<Character>(ss.charAt(0));
       if((ss.length()%2)==0)
       {
           for(int i=1;i<(ss.length()/2);i++)
           {
               s.push(ss.charAt(i));
           }
           int len=ss.length()/2;
           String s1;
            s1 = ss.substring(len);
            String s2 =new String();
            for(int i=0;i<len;i++)
            {
                s2=s2+s.pop();
            }
            
            return s1.equals(s2);
       }
       else if((ss.length()%2)!=0)
       {
           for(int i=1;i<(ss.length()/2);i++)
           {
               s.push(ss.charAt(i));
           }
           int len=ss.length()/2;
           String s1;
            s1 = ss.substring(len+1);
            String s2=new String();
            for(int i=0;i<len;i++)
            {
                s2=s2+s.pop();
            }
            
            return s1.equals(s2);
       }
       else{
           return false;
       }
    }
    public static void main(String[] args) {
        Scanner strinp=new Scanner(System.in);
        String str=strinp.nextLine();
        System.out.println(check(str));
    }
    
}
