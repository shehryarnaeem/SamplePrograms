
#include <iostream>

using namespace std;


int main(){
    int n;
    int m,result=0;
    cin >> n >> m;
    int nn=n*m;
    cout<<nn%2<<endl;
    if((nn/2)!=0)
    {
    	result=nn-((2*n)-1);
    result=result/4;
    result=result+1+(((2*n)-2)/2);
    }
    else if(n*m==1)
    {
    	cout<<"hello";
        result=1;
    }
    else{
    	cout<<"hello";
        result=nn/4;  
    }
    
    cout<< result<<endl;
    return 0;
}

