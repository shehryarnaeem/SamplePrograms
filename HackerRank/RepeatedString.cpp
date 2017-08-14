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
    string s;
    cin >> s;
    long n;
    cin >> n;
    bool flag=true;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a') ++count;
    }
    if(count==s.size())
    {
        cout<<n;
    }
    else if(n%s.size()==0)
    {
        cout<<(count*(n))/s.size();
    }
    else{
        int temp=n-(n%s.size());
        temp=(count*temp)/s.size();
        for(int i=0;i<(n%s.size());i++)
        {
            if(s[i]=='a')
                ++temp;
        }
        cout<<temp;
    }
    return 0;
}
