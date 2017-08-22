#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j;
    cin>>i>>j;

    for( i=4;i<=j;i++)
    {
        int temp=i*i;
        vector<int> sum;
        //int tmp2=temp;
        while (temp!=0)
        {
            int tmp1=temp%10;
            temp=temp/10;
            sum.push_back(tmp1);
            cout<<tmp1<<" ";
        }
        int suma=0;
        for(int k=0;k<sum.size();i++)
        {
            suma+=sum[k];
        }
        if(i==suma)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
