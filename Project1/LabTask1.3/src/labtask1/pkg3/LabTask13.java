/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package labtask1.pkg3;

import java.util.Scanner;

/**
 *
 * @author Lenovo
 */
public class LabTask13 {

    /**
     * @param args the command line arguments
     */
    @SuppressWarnings("empty-statement")
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner intInp=new Scanner(System.in);
        int[] arr={0,1,1,1,0};
        int[] arr1={0,2,2,2,0};
        int[] arr3={3,3,3,3,3};
        for(int i=0;i<arr.length;i++) System.out.print(arr[i]+" ");
        System.out.printf("\n");
        for(int i=0;i<arr1.length;i++) System.out.print(arr1[i]+" ");
        System.out.printf("\n");
        for(int i=0;i<arr3.length;i++) System.out.print(arr3[i]+" ");
        System.out.printf("\n");
    }
    
}
