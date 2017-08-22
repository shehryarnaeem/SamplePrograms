/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package insertionsort;

import java.util.Scanner;

/**
 *
 * @author Lenovo
 */
public class InsertionSort {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner intInp=new Scanner(System.in);
        System.out.print("Enter the size of the array : ");
        int size=intInp.nextInt();
        System.out.print("Enter the elements of the array : ");
        int[] arr=new int[size];
        for(int i=0;i<size;i++)
        {
            arr[i]=intInp.nextInt();
        }
        for(int i=1;i<arr.length;i++)
        {
            int j=i-1;
            int m=i;
            int temp=arr[i];
            while(j>=0&&arr[j]>temp)
            {
                arr[i]=arr[j];
                --i;
                --j;
            }
            arr[i]=temp;
            
        }
        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i]+" ");
        }
        
    }
    
}
