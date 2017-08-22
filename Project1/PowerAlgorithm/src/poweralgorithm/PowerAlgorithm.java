/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package poweralgorithm;

import java.util.Scanner;

/**
 *
 * @author Lenovo
 */
public class PowerAlgorithm {

    /**
     * @param args the command line arguments
     */
    static int fast_exp(int x,int n)
    {
        int y=1;
        if(n<=0)
        {
            return y;
        }
        else{
            if(n%2==1)
            {
              y*=x  ;
            }
            x*=x;
            n=n/2;
            return y*fast_exp(y,n);
        }
    }
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner intInp=new Scanner(System.in);
        int x=intInp.nextInt();
        int n=intInp.nextInt();
        System.out.print(fast_exp(x,n));
    }
    
}
