package lab2;
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Lenovo
 */
public class Account {
    protected int acc_num;
    protected double balance;
    protected String acc_type;
    private static int count;
    static {
        count=0;
    }
    public Account()
    {
        balance=0;
        acc_num=generateAccountNumber();
    }
    public Account(double bal)
    {
        balance=bal;
        acc_num=generateAccountNumber();
        
    }
    public Account(double bal,int acc_no)
    {
        balance=bal;
        acc_num=acc_no;
        
    }
    
    public boolean deposit(double amt)
    {
        if(amt>0)
        {
         balance+=amt;
         return true;
        }
        else {
            return false;
        }
        
    }
    public double getBalance()
    {
        return balance;
    }
    public boolean withdraw(double amt)
    {
        if(amt>0&&balance>=amt)
        {
            balance-=amt;
                return true;   
        }
        else{
            return false;
        }
    }
    
    public int getAccountNumber()
    {
        return this.acc_num;
    }
    private static int generateAccountNumber()
    {
        ++count;
      return count;   
    }
    public String toString()
    {
        return "Account Number: "+acc_num+ " "+"Balance: "+balance;
    }
}
