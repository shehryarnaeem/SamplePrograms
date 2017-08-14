#include <bits/stdc++.h>

using namespace std;

/*int saveThePrisoner(int n, int m, int s){
    // Complete this functions

    if(m>s)
    {
        int diff=n-s;
        ++diff;
        int r=m-diff;
        return r;
    }
    else{
        int diff=(m-1)+s;
        if(diff>5)
        {
            diff=diff-5;
        }
        return diff;
    }
}*/
int saveThePrisoner(int n, int m, int s){
    // Complete this functions

    for
}
int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int m;
        int s;
        cin >> n >> m >> s;
        int result = saveThePrisoner(n, m, s);
        cout << result << endl;
    }
    return 0;
}
