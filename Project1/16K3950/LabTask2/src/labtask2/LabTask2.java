/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package labtask2;

import java.util.Scanner;

/**
 *
 * @author Lenovo
 */
public class LabTask2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner intInp=new Scanner(System.in);
        int a,b;
        System.out.print("Enter the Numbers to swap: ");
        a=intInp.nextInt();
        b=intInp.nextInt();
        a=a+b;
        b=a-b;
        a=a-b;
        System.out.print("A="+a+"  B="+b+" ");
    }
    
}
