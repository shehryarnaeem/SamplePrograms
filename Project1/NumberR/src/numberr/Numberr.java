/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package numberr;

import java.util.Scanner;

/**
 *
 * @author Lenovo
 */
public class Numberr {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner intInp=new Scanner(System.in);
        System.out.println("Enter the number:");
     int   num=intInp.nextInt();
        int temp,d=0;
        while(num>0)
        {
            temp=num%10;
            temp=temp+(d*10);
            d=temp;
            num=num/10;
        }
        System.out.print(d);
    }
    
}
