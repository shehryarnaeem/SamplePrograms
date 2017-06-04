#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b,c;
    string gg[9]={"one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    int i;
    for( i=a;i<=b;i++)
    {
        if(i>=1&&i<=9)
            {
            cout<<gg[i-1]<<endl;
            }
        else if(i>9)
            {
            if(i%2==0)
			 {
			cout<<"even"<<endl;
			}
            else {
			cout<<"odd"<<endl;
			    }
            }
        
    }
    return 0;
}

