#include<bits/stdc++.h>
#include<sstream>
using namespace std;
bool sqrw(long int sqr,int p)
{
    stringstream ss;
    ss<<sqr;
    string temp=ss.str();
    bool flag=false;
    cout<<temp<<" "<<temp.size()<<endl;
    if((temp.size()%2)==0)
    {
        int half=(temp.size())/2;
        int temp2=0;
        for(int i=0;i<=half;i++)
        {
            temp2+=((int)temp[i]-48);

        }
        for(int i=half+1;temp[i]!='\0';i++)
        {
            temp2+=((int)temp[i]-48);

        }

        if(temp2==p) flag=true;
    }
    return flag;


}
int main()
{
    int p,q;
    cin>>p>>q;
    vector<int> kk;
    for(int i=p;i<=q;i++)
    {


        long long int sqr=pow(i,2);
        bool flag=sqrw(sqr,i);
        if(flag!=false)
        {
            kk.push_back(i);
        }



    }

    for(int i=0;i<kk.size();i++)
    {
        cout<<kk[i]<<endl;
    }
}
