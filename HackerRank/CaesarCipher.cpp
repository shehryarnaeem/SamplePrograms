#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    string s;
    cin>>s;
    int rot;
    cin>>rot;
    //int temp;
//    char a=temp;
                if(rot>=26)
                {
                    int temp;
                    temp=floor(rot/26);
                    rot=rot-(26*temp);
                }
    for(int i=0;i<s.size();i++)
    {
        int temp=s[i];
        if(temp>=65&&temp<=90)
        {
            if((temp+rot)>90)
            {
                temp=temp+rot;
                temp=(temp-90)+64;
                s[i]=temp;
            }
            else
            {
              temp=temp+rot;
              s[i]=temp;
            }

        }
        else if(temp>=97&&temp<=122)
        {
            if((temp+rot)>122)
            {

                temp=temp+rot;
                temp=(temp-122)+96;
                s[i]=temp;
            }
            else{
                temp=temp+rot;
                s[i]=temp;
            }
        }
    }
    cout<<s;

    return 0;
}
