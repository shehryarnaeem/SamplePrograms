#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    // Complete this function
    if(s.find("AM")!=string::npos)
    {
        s.erase(s.size()-2,2);
        string sr=s.substr(0,2);
        if(sr=="12")
        {
            sr="00";
        }
        s.erase(0,2);
        s=sr+s;

    }
    else{
        int hr;
        s.erase(s.size()-2,2);
        string hr1=s.substr(0,2);
        hr=stoi(hr1);
        if(hr!=12)
        {
            hr+=12;
            stringstream ss;
            ss<<hr;
            hr1=ss.str();
        s.erase(0,2);
        s=hr1+s;
        }
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
