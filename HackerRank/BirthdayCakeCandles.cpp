#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    map<int,int> sieve;
    for(int i=0;i<n;i++)
    {
        if(sieve.find(ar[i])==sieve.end())
        {
            sieve.insert(make_pair(ar[i],1));
        }
        else
        {
            sieve[ar[i]]+=1;
        }
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>max)
        {

            max=ar[i];
        }
    }
    return sieve[max];

}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
