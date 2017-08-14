#include <bits/stdc++.h>

using namespace std;

int alternatingCharacters(string s){
    // Complete this function
    int deletions=0;
    for(int i=0;i<s.size();i++)
    {
        int j=i;
        int count=0;
        while(s[i]==s[++j])
        {
            ++count;
        }
        i=j-1;
        deletions+=count;
    }
    return deletions;

}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = alternatingCharacters(s);
        cout << result << endl;
    }
    return 0;
}
