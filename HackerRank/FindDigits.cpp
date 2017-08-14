#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<sstream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        stringstream ss;
        ss<<n;
        string tra=ss.str();
        int count=0;
        for(int i=0;i<tra.size();i++)
        {
         char t=tra[i];
            stringstream str;
            str<<t;
            int temp;
            str>>temp;
            if(temp!=0&&(n%temp)==0)
            {
                ++count;
            }
        }
        cout<<count<<endl;

    }

    return 0;
}
