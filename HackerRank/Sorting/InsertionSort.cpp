#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a;

    for(int i=0;i<n;i++)
    {
        int as;
        cin>>as;
        a.push_back(as);

    }
    int j=1,k,temp;
    while(j<a.size())
        {
        k=j-1;
        temp=a[j];
        while(k>=0&&a[k]>temp)
        {
            a[j]=a[k];
            --j;
            --k;
            for(int i=0;i<n;i++)
            cout<<a[i]<<" ";

            cout<<endl;


        }
        a[j]=temp;
        ++j;

    }

for(int i=0;i<n;i++)
            cout<<a[i]<<" ";

}
