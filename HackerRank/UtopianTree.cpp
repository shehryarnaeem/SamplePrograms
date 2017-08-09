#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result=1;
        if(n==0)
        {
            result=1;
        }
       else if(n%2==0)
       {
           int aa=n/2;

            for(int i=0;i<aa;i++)
            {
                result*=2;
                result+=1;
            }
       }
        else
        {
            int aa=(n-1)/2;
            for(int i=0;i<aa;i++)
            {
                result*=2;
                result+=1;
            }
            result*=2;
        }
        cout<<result<<endl;

    }
    return 0;
}
