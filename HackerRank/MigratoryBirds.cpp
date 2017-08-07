#include <bits/stdc++.h>
#include<vector>

using namespace std;

int migratoryBirds(int n, vector <long int> a) {
    // Complete this function
   long	int count=1,maj_i=0,maxc=0;
		for(long int j=0;j<n;j++) cin>>a[j];
		
		for(long int k=1;k<n;k++)
		{
			if(a[maj_i]==a[k])
			{
				++count;
			 } 
			else --count;
			if(count==0)
			{
				maj_i=k;
				count =1;
			}
			
		}
		for(long int l=0;l<n;l++)
		{
			if(a[maj_i]==a[l])
			{
				maxc++;
			}
		}
    int max_e;
		if(maxc>(n/2))
		{
			 max_e=a[maj_i];
		}
    max_e=a[maj_i];
    cout<<max_e<<endl;
	 
    return max_e;
}

int main() {
    long int n;
    cin >> n;
    vector<long int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}

