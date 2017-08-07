#include <bits/stdc++.h>

using namespace std;
int min(vector<int> b)
{
  int min=b[0];
  for(int i=1;i<b.size();i++)
  {
    if(min>b[i])
    {
      min = b[i];
    }
  }
  return min;
}
bool xmoda(int x,vector<int> a)
{
  bool res=true;
  for(int i=0;i<a.size();i++)
  {
    if(x%a[i]!=0)
    {
      res=false;
      break;
    }

  }
  return res;
}
bool bmodx(int x,vector<int> b,int min)
{
  bool res=true;
  for(int i=0;i<b.size();i++)
  {
    if(x>b[i]&&b[i]%x!=0)
    {
      res=false;
      break;
    }
  }
  return res;
}
int getTotalX(vector < int > a, vector < int > b){
    // Complete this function
    int min_e=min(b);
    int x=a[0],count=0;
    while(x<min)
    {
      if(amodx(x,a)&&bmodx(x,b,min))
      {
        ++count;
      }
      ++x;
    }
   return count;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}
