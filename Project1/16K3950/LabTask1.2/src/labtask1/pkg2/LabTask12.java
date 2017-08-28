/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package labtask1.pkg2;

import java.util.Scanner;

/**
 *
 * @author Lenovo
 */
public class LabTask12 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner intInp=new Scanner(System.in);
        
        int[] sum=new int[5];
        sum[0]=5;
        System.out.println(sum[0]+" ");
        for(int i=1;i<5;i++)
        {
            sum[i]=sum[i-1]-1;
            for(int j=0;j<=i;j++)
            {
                System.out.print(sum[j]+" "); 
            }
            System.out.printf("\n");
        }
    }
    
}
