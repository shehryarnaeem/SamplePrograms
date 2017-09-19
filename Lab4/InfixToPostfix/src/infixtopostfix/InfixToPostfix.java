
package infixtopostfix;

import java.util.Scanner;

public class InfixToPostfix {
    
    public static Object postfixEvaluation(String str)
    {
        int ans=0;
       Stack <Character> ss = new Stack<Character>();
       int count=0;
       for(int i=0;i<str.length();i++)
       {
           
           if(Character.isDigit(str.charAt(i)))
           {
               ss.push(str.charAt(i));
               
           }
           else 
           {
               
               int value1;
               value1 = Character.getNumericValue(ss.pop());
               int value2;
               value2 = Character.getNumericValue(ss.pop());
               System.out.println(value2);
               switch (str.charAt(i)){
                   case '+':
                       ans+=value1+value2;
                       break;
                   case '-':
                       ans+=value1-value2;
                       break;
                    case '*':
                       ans+=value1*value2;
                       break;
                     case '/':
                       ans+=value1/value2;
                       break;
               }
               char s=(char) ans;
               ss.push(s);
           }
           
       }
       return ans;
    }
    public static int checkp(char c)
    {
        if(c=='*'||c=='/')
        {
            return 1;
        }
        else if(c=='+'||c=='-')
        {
            return 2;
        }
        return 0;
    }
    public static String toPostfix(String inf)
    {
                String str = new String();
                Stack ss=new Stack(inf.charAt(0));
                for(int i=1;i<inf.length();i++)
                {
                    //System.out.println("IN loop");
                    if(Character.isDigit(inf.charAt(i)))
                    {
                        str=str+inf.charAt(i);
                    }
                    else if(inf.charAt(i)==')')
                    {
                        while(!ss.getPeek().equals('('))
                        {
                            str=str+ss.pop();
                        }
                        ss.pop();
                    }
                    else if(checkp(inf.charAt(i))<=checkp((char) ss.getPeek()))
                    {
                        while(checkp((char) ss.getPeek())<checkp(inf.charAt(i)))
                        {
                            str+=ss.pop();
                        }
                        ss.push(inf.charAt(i));
                    }
                    else{
                        ss.push(inf.charAt(i));
                    }
                        
                }
                    
                        return str;
    }
    public static void main(String[] args) {
        Scanner strinp=new Scanner(System.in);
        System.out.println("Enter the expression:");
        String inf=strinp.nextLine();
        String str=toPostfix(inf);
        System.out.println(toPostfix(inf));
        System.out.println(postfixEvaluation(str));
        
    }
    
}
