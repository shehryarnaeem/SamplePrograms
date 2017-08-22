#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int sizeS;
    cin>>sizeS;
    string ss;
    cin>>ss;
    stringstream del;
    int j;
    bool flag =true;
    for(int i=0;i<ss.size();i++)
    {int count=0;
        for(j=i+1;(ss[i]==ss[j])&&j<ss.size();j++)
        {
            flag=false;
            ++count;
        }

        if(flag==false)
        {
            ss.erase(i,count);
            i=i-(j-1);
        }
    }
    cout<<ss;

    return 0;
}
