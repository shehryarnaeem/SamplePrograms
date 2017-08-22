#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,c,m;
        cin>>n>>c>>m;
        int wrappers=n/c;
        int left=wrappers%m;
         n=n/c;
        while(m<=wrappers)
        {
            int temp1,temp2;
            temp1=wrappers/m;
            n+=wrappers/m;
            temp2=wrappers%m;
            wrappers=temp1+temp2;
        }
        cout<<n<<endl;


    }
    return 0;
}
