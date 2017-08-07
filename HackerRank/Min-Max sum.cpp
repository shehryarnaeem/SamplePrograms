#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    long int max=0,min,sum=0;
    for(int i=0;i<5;i++)
    {
        sum=0;

        for(int j=0;j<5;j++)
        {
            if(i!=j)
            {
                sum+=arr[j];
            }

        }

        if(sum>max)
            {

                max=sum;
            }
            if(i==0)
        {
            min=max;
        }
            if(sum<min)
            {

                min=sum;
            }
    }
    cout<<min<<" "<<max;
    return 0;
}
