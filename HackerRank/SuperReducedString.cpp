#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s){
    // Complete this function
    int j;

    for(int i=s.size();i>=0;i--)
    {
        j=i+1;
        if(s[i]==s[j])
        {
               s.erase(i,2);
        }

    }
    if(s.size()==0)
    {
        s="Empty String";
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}
