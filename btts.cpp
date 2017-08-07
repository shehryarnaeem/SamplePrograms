#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector < int > a, vector < int > b){
    // Complete this function
    int x=a.back(),count=0;
    for(int i=0;i<b.back();i++)
    {
        if((x%a.back()==0)&&(b.back()%x==0)) ++count;
        x*=2;
    }
    return count;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}

