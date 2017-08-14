#include <bits/stdc++.h>

using namespace std;

int gemstones(vector <string> arr){
    // Complete this function
    int maxi,maxe=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i].size()>maxe)
        {
            maxe=arr[i].size();
            maxi=i;
        }
    }
    bool flag=false;
    string maxs=arr[maxi];
    int count=0;

        for(int j=0;j<maxs.size();j++)
        {
            for(int i=0;i<arr.size();i++)
            {
            if(i!=maxi)
            {
                if(arr[i].find(maxs[j])!=string::npos)
                {
                  flag=false;
                }
                else
                {
                    flag=true;
                }
            }
            }
        if(flag) ++count;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = gemstones(arr);
    cout << result << endl;
    return 0;
}
