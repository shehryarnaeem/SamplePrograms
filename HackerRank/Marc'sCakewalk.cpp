#include <bits/stdc++.h>

using namespace std;
long long int fast_exp(int x,int n)
{
 long long int y=1;
    if(n!=0)
    {
    while(n>0)
    {
        if(n%2==1)
        {

            y*=x;
        }
        n=n/2;
        x*=x;
    }
    }
    return y;
}
int main(){
    int n;
    cin >> n;
    vector<int> calories(n);
    for(int calories_i = 0; calories_i < n; calories_i++){
       cin >> calories[calories_i];
    }
    sort(calories.begin(),calories.end());
    int sum=0;
    for(int i=calories.size()-1,j=0;i>=0;i--)
    {
        sum+=calories[i]*pow(2,j);
        ++j;
    }
    cout<<sum;
    // your code goes here
    return 0;
}
