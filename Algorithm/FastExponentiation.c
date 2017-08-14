#include<bits/stdc++.h>
using namepsace std;
string decToBin{
    int temp;
    string bin;
    while(n>=2)
    {
        bin.push_back(n%2);
        n=n/2;


    }
    cout<<bin<<endl;
    return 0;
}
int main{
    int n,y;
    cout<<"Binary Conversion"<<endl;
    cin>>n;
    cout<<decToBin(n);

}
