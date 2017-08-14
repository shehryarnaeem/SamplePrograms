#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }

    int e=100;
    if(k==1)
    {
        for(int i=0;i<n;i++)
        {
         if(c[i]==1)
        {
            e-=3;
        }
        else{
            e-=1;
        }
        }

    }
    else{
        int i=0;
    while((i+k)%n!=0)
    {
        i=(i+k)%n;
        if(c[i]==1)
        {
            e-=3;
        }
        else{
            e-=1;
        }
    }
        e=e-1;
    }
    cout<<e;
    return 0;
}
