#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,t;
    cin>>n>>t;
    int width[n];
    for(int i=0;i<n;i++)
    {
        cin>>width[i];
    }
    int j,k;
    for(int i=0;i<t;i++)
    {
        cin>>j>>k;
        int min = 3;
        while(j<=k)
        {
            if(width[j]<min)
            {
                min=width[j];
            }
            ++j;
        }
        cout<<min<<endl;
    }
    return 0;
}
