/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab2;

/**
 *
 * @author Lenovo
 */
public class CheckingAccount extends Account{
    public CheckingAccount()
    {
        super();
    }
    public CheckingAccount(double bal)
    {
        super(bal);
    }
    public CheckingAccount(double bal,int acc_no)
    {
        super(bal,acc_no);
    }
    @Override
    public boolean withdraw(double amt)
    {
        if(amt>0&&(super.balance-amt)>=-100)
        {
            super.balance-=amt;
                    
            return true;
        }
        else{
            return false;
        }
    }
    
}
