#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
    }
    for(int i=0;i<unsorted.size();i++)
    {
        for(int j=i+1;j<unsorted.size();j++)n
        {
            long int a=unsorted[i].length();
            long int b=unsorted[j].length();
            if(a>b)
            {
                swap(unsorted[i],unsorted[j]);
            }
            else if(a==b)
            {
            	if(unsorted[i]>unsorted[j])
            	{
            		swap(unsorted[i],unsorted[j]);
				}
			}
        }
    }
    for(int i=0;i<unsorted.size();i++)
    {
        cout<<unsorted[i]<<endl;
    }
    
    // your code goes here;
    return 0;
}

