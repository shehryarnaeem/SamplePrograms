import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    /**
     *
     * @param x
     * @param n
     * @return
     */
    public static BigInteger fast_exp(int x,int n)
{
    BigInteger y=new BigInteger("1");
    if(n>=0)
    {
        while(n>=1)
        {
            if(n%2==1)
            {
                 y= y.multiply(BigInteger.valueOf(x));
            }
            n=n/2;
            x=x*x;
        }
    }
    return y;
}
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] calories = new int[n];
        for(int calories_i=0; calories_i < n; calories_i++){
            calories[calories_i] = in.nextInt();
            Arrays.sort(calories);
            BigInteger sum=new BigInteger("0");
            for(int i=calories.length-1,j=0;i>=0;i--)
            {
                BigInteger temp;
                temp = new BigInteger("0");
                temp=temp.add(BigInteger.valueOf(calories[i]));
                temp=temp.multiply(fast_exp(2,j));
                sum  = sum.add(temp);
                ++j;
            }


        }
        //System.out.print(sum);
        String s1=sum.toString();
        System.out.print(s1);
        
    }
}

