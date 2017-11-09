package hashing;

import java.util.ArrayList;
import java.util.Scanner;

public class Hashing {
    public static int n;
    public static ArrayList<Integer> []arr;
    public static float []lf;
    public static int hash_fun(int key)
    {
        int index=key%n;
        return index;
    }
    public static void update_lf(int key)
    {
        lf[hash_fun(key)]=arr[hash_fun(key)].size()/n;
    }
    public static void resize(int key)
    {
        int a=n;
        n=n*2;
        ArrayList<Integer> []ar=new ArrayList[n];
        for(int i=0;i<n;i++)
        {
            ar[i]=new ArrayList<>();
        }
        update_lf(key);
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<arr[i].size();i++)
            {
                ar[i].add(arr[i].get(j));
            }
        }
        arr=ar;
       
    }
    public static void insert(int key)
    {
        if((float)(arr[hash_fun(key)].size()/n)>lf[hash_fun(key)])
        {
            resize(key);
            arr[hash_fun(key)].add(key);
        }
        else{
          arr[hash_fun(key)].add(key);  
         
        }
        
         update_lf(key);
    }
    public static void main(String[] args) {
        System.out.println("Enter the table size:");
        Scanner intInp=new Scanner(System.in);
         n=intInp.nextInt();
        arr = new ArrayList[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=new ArrayList<>();
        }
        System.out.println("Enter the number of elements:");
        int k=intInp.nextInt();
        lf=new float[n];
        for(int i=0;i<n;i++)
        {
            lf[i]=(float) 0.7;
        }
        System.out.println("Enter the elements:");
        for(int i=0;i<k;i++)
        {
           int temp=intInp.nextInt();
           insert(temp);
        }
        System.out.println("Enter a key:");
        int z=intInp.nextInt();
          System.out.println(arr[z]);
      
        System.out.print(n);
        
        
        
        
        
    }
    
}
