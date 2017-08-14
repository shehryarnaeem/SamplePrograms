#include<iostream>
using namespace std;
int main()
{
    string searchterm;
    cin>>searchterm;
    cout<<searchterm;
    string aa="start www.google.com/search?q="+searchterm;
    system(aa.c_str());
    return 0;
}
