#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>


using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
    }
    // your code goes here
    int bev=0;
    for(int i=0;i<n;i++)
    {
    	if(height[i]>k)
    	{
    		int diff=height[i]-k;
    		k+=diff;
    		bev+=diff;
    		
		}
	}
	cout<<bev;
    return 0;
}

