#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        // your code goes here
        string org="hackerrank";
        int j=0,count=0;
        for(int i=0;i<org.size();i++)
        {
            while(j<s.size()&&s[j]!=org[i]) ++j;
            if(s[j]==org[i]) ++count;

        }
        cout<<count<<"  "<<org.size()<<endl;
        if(count==org.size()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
