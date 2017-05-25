#include<iostream>
#include<vector>
using namespace std;

class c
{
	int x;
	int y;
	
	public:
		c(int a, int b)
		{
			x = a;
			y = b;
		}
		
		int getX()
		{
			return x;
		}
		
		int getY()
		{
			return y;
		}
};

int main()
{
	vector<c*> vec;
	
	for(int i=0;i<10;i++)
	{
		c* currObj = new c(i + 8, i % 2);
		
		vec.push_back(currObj);
	}

	for(int i=0;i<10;i++)
	{
		cout<<vec[i]->getX()<<endl<<vec[i]->getY() << endl;
	}
	return 0;
}
