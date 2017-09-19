package balancedparenthesis;

import java.util.Scanner;
import java.util.Stack;

public class BalancedParenthesis {
    public static void main(String[] args) {
        Scanner strInp=new Scanner(System.in);
        
        Scanner intInp=new Scanner(System.in);
        int q=intInp.nextInt();
        for(int i=0;i<q;i++)
        {
            Stack <Character> ss=new Stack<Character>();
            String s=new String();
            if(strInp.hasNext())
            s=strInp.nextLine();
            
            if((s.length()%2)!=0)
            {
                System.out.println("NO");
            }
            else{
                for(int j=0;j<(s.length()/2);j++)
                {
                    ss.push(s.charAt(j));
                }
                String s1=new String();
                s1=s.substring((s.length()/2));
                String s2=new String();
                for(int j=0;j<(s.length()/2);j++)
                {
                    s2=s2+ss.pop();
                }
                System.out.println(s1);
                System.out.println(s2);
                boolean flag=false;
                for(int j=0;j<s1.length();j++)
                {
                    flag=false;
                    char c=s2.charAt(j);
                    
                    switch (c){
                        case '(':
                            flag=(s1.charAt(j)==')');
                            break;
                        case '[':
                            flag=(s1.charAt(j)==']');
                            break;
                         case '{':
                            flag=(s1.charAt(j)=='}');
                            break;
                    }
                    if(!flag)
                    {
                        break;
                    }
                }    
                
                if(flag)
                {
                    System.out.println("YES");
                }
                else{
                    System.out.println("NO");
                }
            }
            
            
        }
    }
    
}
