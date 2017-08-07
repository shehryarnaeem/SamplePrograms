#include <bits/stdc++.h>

using namespace std;

string onceInATram(int x) {
    // Complete this function
    bool flag=false;
    stringstream a;
    a<<x;
    string temp=a.str();
    string first=temp.substr(0,3);
    string second=temp.substr(3);
    int f=stoi(first);
    int sec=stoi(second);
    int sum1=0,sum2=0;
    while(flag!=true)
    {
        ++x;
        stringstream s;
        s<<x;
        temp=s.str();
        first=temp.substr(0,3);
        second=temp.substr(3);
        string temp1=first.substr(0,1);
    	int f1=stoi(temp1);
    	temp1=first.substr(1,1);
    	int f2=stoi(temp1);
    	temp1=first.substr(2,1);
    	int f3=stoi(temp1);
    	temp1=second.substr(0,1);
    	int s1=stoi(temp1);
    	temp1=second.substr(1,1);
    	int s2=stoi(temp1);
    	temp1=second.substr(2,1);
    	int s3=stoi(temp1);
    	sum1=f1+f2+f3;
    	sum2=s1+s2+s3;
    	if(sum1==sum2)
        {
          flag=true;
        }


	}


    return temp;

}

int main() {
    int x;
    cin >> x;
    string result = onceInATram(x);
    cout << result << endl;
    return 0;
}

