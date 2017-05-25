#include<iostream>
using namespace std;

int main() 
{
    int n;
    long int x, i, a;
    bool isPrime; // This flag will test if number is prime or not?
    cin>>n; // Here "n" will represent the number of test cases
    while(n)
    {
        cin>>x; // "x" is the number to be tested for the nth case

        if(x<=2)
        {
            cout<<2<<endl; // All numbers smaller than 3 will have the smallest prime number as 2.
        }
        else{
        for(i=x;i*i<=1000000;i++) // Should I have checked values of "i" for odd numbers only? I forgot to try that... Would it have helped in reducing time complexity?
        {
            isPrime=true;
            for(a=2; a<i; a++) // Okay I tried making it (i/2)+1 but then the compiler said that it was a wrong answer. I am skeptical though...
            {
                if(i%a==0 and i!=2)
                    isPrime=false;
            }
            if(isPrime==true)
            {
                cout<<i<<endl;
                break;
            }
        }

        n--;
    }
    }
    return 0;
}

