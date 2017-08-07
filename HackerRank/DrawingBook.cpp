#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    // Complete this function
    int countf,countl;
    countf=p/2;
    countl=(n-p)/2;
    int countfi;
    countf>countl?countfi=countl:countfi=countf;
    return countfi;
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}

