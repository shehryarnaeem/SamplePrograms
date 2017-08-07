import java.util.*;
import java.io.*;
import java.lang.*;
class Solution{

public static void main(String args[])
{
	Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
			int result[]=new int[n];
			for(int k=0;k<n;k++)
			{
				if(k==0)
				{
					result[k]=a+((int)(Math.pow(2.00,(double)k))*b);
				}
				else
				{
					result[k]=result[k-1]+((int)(Math.pow(2,(double)k))*b);
				}
				
			}
			
			for(int j=0;j<n;j++)
			{
				System.out.printf("%d ",result[j]);
			}
				System.out.println("");
		
			
			
			
			
        }
        in.close();
	
		
}


}

