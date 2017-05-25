#include <iostream>
using namespace std;

template <class T>
void fun(const T&x)
{
	static int count = 0;
	cout << "x = " << x << " count = " << count << endl;
	++count;
	return;
}

int main()
{
    int a=1;
	fun(a); 
	cout << endl;
	fun<int>(1); 
	cout << endl;
	fun<double>(1.1);
	cout << endl;
	return 0;
}

