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

public class Lab2 {


    /**
     * @param args the command line arguments
     */
    public static class TestAccount{
        public static void Test()
        {
            CheckingAccount a = new CheckingAccount();
            CheckingAccount b = new CheckingAccount(100);
            CheckingAccount c = new CheckingAccount(150, 998);
            SavingsAccount d = new SavingsAccount();
            SavingsAccount e = new SavingsAccount(101);
            SavingsAccount f = new SavingsAccount(151, 999);
            a.deposit(50);
            b.deposit(50);
            c.deposit(50);
            d.deposit(50);
            e.deposit(50);
            f.deposit(50);
            System.out.println(a.toString());
            System.out.println(b.toString());
            System.out.println(c.toString());
            System.out.println(d.toString());
            System.out.println(e.toString());
            System.out.println(f.toString());
            System.out.println("-------");
            
            // withdraw
            if (!a.withdraw(100))
            {
              System.out.println("Account # "+a.getAccountNumber()+" - could not withdraw");  
            }
            if (!b.withdraw(100))
            {
              System.out.println("Account # "+a.getAccountNumber()+" - could not withdraw");  
            }
            if (!c.withdraw(100))
            {
              System.out.println("Account # "+a.getAccountNumber()+" - could not withdraw");  
            }
            if (!d.withdraw(100))
            {
              System.out.println("Account # "+a.getAccountNumber()+" - could not withdraw");  
            }
            if (!e.withdraw(100))
            {
              System.out.println("Account # "+a.getAccountNumber()+" - could not withdraw");  
            }
            if (!f.withdraw(100))
            {
              System.out.println("Account # "+a.getAccountNumber()+" - could not withdraw");  
            }
            
            System.out.println("-------");
            System.out.println(a.toString());
            System.out.println(b.toString());
            System.out.println(c.toString());
            System.out.println(d.toString());
            System.out.println(e.toString());
            System.out.println(f.toString());
            System.out.println("-------");
            
            if (!SavingsAccount.setInterestRate(12.0))
            {
                System.out.println(  "Couldn't set interest rate!");
            }
            if (!SavingsAccount.setInterestRate(0.012))
            {
                System.out.println(  "Couldn't set interest rate!");
            }
            d.addInterest(1);
            e.addInterest(1);
            f.addInterest(1);
            System.out.println(a.toString());
            System.out.println(b.toString());
            System.out.println(c.toString());
            System.out.println(d.toString());
            System.out.println(e.toString());
            System.out.println(f.toString());
            System.out.println("-------");
                   
                }
  
    
}
      public static void main(String[] args) {
        // TODO code application logic here
        TestAccount ac;
        ac = new TestAccount();
        ac.Test();
        
    }
}