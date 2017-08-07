#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    int max=0,min=a[0];
    for(int i=0;i<5;i++)
    {

        for(int j=0;j<5;j++)
        {
            if((a[i]+a[j])>max)
            {

                max=a[i]+a[j];
            }
            if((a[i]+a[j])>min)
            {

                min=a[i]+a[j];
            }

        }
    }
    cout<<min<<" "<<max;
    return 0;
}
