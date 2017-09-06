#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    vector<int> num;
    for(int i=0;i<size;i++)
    {
        int temp;
        cin>>temp;
        num.push_back(temp);
    }
    vector<int> diff;
    for(int i=0;i<num.size();i++)
    {
        for(int j=i+1;j<num.size();j++)
        {
            if(num[i]==num[j])
            {
                int temp=abs(i-j);
                                diff.push_back(temp);
                //cout<<temp<<endl;
            }
        }
    }
    sort(diff.begin(),diff.end());

    cout<<diff[0]<<endl;

}
