#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class IceCream {

    public:
        int flavor;
        int index;

        IceCream(int flavor, int index) {

       }
};

int binarySearch(int first, int last, vector<IceCream> arr, int search) {
    int mid=(first+last)/2;
    while(arr[mid].flavor!=search)
    {
        if(arr[mid].flavor<search) {
            last=mid;
            mid=(first+last)/2;
    }
    else
    {
        first=mid;
        mid=(first+last)/2;
    }

    }
    return mid;


}

int main() {
    int t;
    int n, m;
    cin >> t;
    for(int test = 0; test < t; test++) {
        cin >> m >> n;
        vector<IceCream> arr;
        arr.reserve(n);

        for (int i = 0; i < n; i++) {
            int cost;
            cin >> cost;
            arr.push_back(IceCream(cost, i + 1));
        }

        sort(arr.begin(), arr.end(),compare);
        int firstIndex = 100000, secondIndex = 100000;
        for(int i = 0; i < n - 1 ; i++) {
            int search1 = m - arr[i].flavor;
            if(search1 >= arr[i].flavor) {
                int index = binarySearch( i + 1, n - 1, arr, search1);
                if( index != -1 ) {
                    cout << min(arr[i].index, index) << " " << max(arr[i].index, index) << endl;
                    break;

                }
            }
        }

    }

}

