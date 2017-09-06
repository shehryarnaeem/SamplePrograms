#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool bin_search(vector<int> num,int size,int nn)
{
    int low=0,high=num.size()-1;
    int mid=(low+high)/2;
    for(int i=0;i<num.size();i++)
    {
        if(num[mid]>nn)
        {
            low=mid;
            mid=(high+low)/2;
        }
        else if(num[mid]<nn)
        {
            high=mid;
            mid=(high+low)/2;
        }
        else if(num[mid]==nn)
            {
            return true;
        }
        else{
            return false;
        }
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size,d;
    cin>>size>>d;
    vector<int> num;
    for(int i=0;i<size;i++)
    {
        int temp;
        cin>>temp;
        num.push_back(temp);
    }
    int count,count2=0;
    for(int i=0;i<size;i++)
    {
        count=1;
        bool flag=true;
        int temp=num[i]+3;
        int ct=0;
        while(count!=3&&flag==true)
        {
            if(bin_search(num,size,temp))
            {
                ++count;
            }
            else{
                flag=false;
            }
            temp=temp+3;
        }
        if(count==3)
        {
            ++count2;
        }
    }
    cout<<count2;
    return 0;
}
