#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
    {
        int len=arr[i];
        int count=0;
        if(len>0)
        {

        for(int j=0;j<arr.size();j++)
        {
            if(arr[j]>0)
            {
                arr[j]=arr[j]-len;
                ++count;
            }
        }
        }
        if(count!=0)
        cout<<count<<endl;
    }

    return 0;
}
