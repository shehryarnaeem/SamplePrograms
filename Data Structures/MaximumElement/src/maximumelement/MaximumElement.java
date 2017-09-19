


import java.util.Scanner;
import java.util.Stack;

public class MaximumElement {

    
    public static void main(String[] args) {
        Stack <Integer> ss=new Stack<Integer>();
        
        Scanner intinp=new Scanner(System.in);
        int q=intinp.nextInt();
        int w;
        int inp;
        int max = 0;
        for(int i=0;i<q;i++)
        {
            w=intinp.nextInt();
            
            switch(w){
                case 1:
                 inp=intinp.nextInt();
                 ss.push(inp);
                 break;
                case 2:
                    ss.pop();
                    break;
                case 3:
                 max=check_max(ss);
                 System.out.println(max);
                 break;
            }
            
        }
        
    }

    private static int check_max(Stack <Integer> ss) {
        Stack <Integer> s2=new Stack<Integer>();
        int max=ss.peek();
        int temp;
        for(int i=0;i<ss.size();i++)
        {
            temp=(int) ss.pop();
          if(max<temp)
          {
              max=temp;
          }
          s2.push(temp);
        }
        
        for(int i=0;i<s2.size();i++)
        {
            ss.push(s2.pop());
        }
        return max;
    }
}
