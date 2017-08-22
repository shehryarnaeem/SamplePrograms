#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
       long long int x,y,z;
        long long int b,w;
        cin>>b>>w;
        cin>>x>>y>>z;
        long long int btotal,wtotal,total;
        btotal=((b*x)>(b*(y+z)))?(b*(y+z)):(b*x);
        wtotal=((w*y)>(w*(x+z)))?(w*(x+z)):(w*y);
        total=btotal+wtotal;
        cout<<total<<endl;
    }
    return 0;
}
