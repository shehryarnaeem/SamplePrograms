#include <bits/stdc++.h>

using namespace std;

long howManyToInvite(long int A, long int B, long int a) {
    // Return the number of people Leha should invite to his party
    long int b;
    float temp=A/B;
    b=(int)a/temp;
    return b;
}

int main() {
    long int A;
    long int B;
    long int a;
    cin >> A >> B >> a;
    long int b= howManyToInvite(A, B, a);
    cout << b << endl;
    return 0;
}

