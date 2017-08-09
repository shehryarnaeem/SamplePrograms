#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int days;
    cin>>days;
    int sum=2,a=2;
    for(int i=1;i<days;i++)
    {
        a=(a*3)/2;
        sum+=a;
    }
    cout<<sum;

    return 0;
}
