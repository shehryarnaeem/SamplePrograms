/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package labtask3;

import java.util.Scanner;

/**
 *
 * @author Lenovo
 */
public class LabTask3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner intInp= new Scanner(System.in);
        System.out.print("Enter the age of Employee: ");
        int age=intInp.nextInt();
        System.out.print("Enter the Experience: ");
        int exp=intInp.nextInt();
        System.out.print("Enter the working hours: ");
        int wh=intInp.nextInt();
        int total;
        if(age>50&&exp>10&&wh>240)
        {
            total=wh*500;
            System.out.print(total);
     
        }
        else if(age<=50&&age>40&&exp<=10&&exp>6&&wh<=240&&wh>200)
        {
            total=wh*425;
            System.out.print(total);
        }
        else if(age<=40&&age>30&&exp<=6&&exp>3&&wh<=200&&wh>160)
        {
            total=wh*375;
            System.out.print(total);
        }
        else if(age<=30&&age>22&&exp<=3&&exp>1&&wh<=160&&wh>120)
        {
            total=wh*300;
           System.out.print(total);
        }
        else System.out.print("Invalid Number ");
    }
    
}
