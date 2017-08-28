/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package evenorodd;

import java.util.Scanner;

/**
 *
 * @author Lenovo
 */
public class EvenOrOdd {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner intInp=new Scanner(System.in);
        System.out.print("Enter the number: ");
        int x=intInp.nextInt();
        if(x%2==0)
        {
            System.out.print(x+" is an even number");
        }
        else{
            System.out.print(x+" is an odd number");
        }
        
    }
    
}
