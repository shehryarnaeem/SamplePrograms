/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package testing;

import java.util.Scanner;



/**
 *
 * @author Lenovo
 */
public class Testing {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
       Scanner intInp=new Scanner(System.in);
       int n;
       System.out.print("Enter the number of inputs: ");
       n=intInp.nextInt();
       System.out.println((5*n)+2);
    }
    
}
