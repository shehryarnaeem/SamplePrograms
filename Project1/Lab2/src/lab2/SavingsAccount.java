/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab2;


public class SavingsAccount extends Account {

    public SavingsAccount() {
    }

    public SavingsAccount(double bal) {
        super(bal);
    }

    public SavingsAccount(double bal, int acc_no) {
        super(bal, acc_no);
    }
    private static double interestRate;
    static{
        interestRate=0;
    }
    public static boolean setInterestRate(double rate)
    {
        if(rate>=0&&rate<0.10)
        {
         interestRate=rate;
         return true;
        }
        else{
            return false;
        }
    }
    public void addInterest(int months)
    {
        double temp=1.2/12;
        super.balance+=(temp*months);
        
    }
}
