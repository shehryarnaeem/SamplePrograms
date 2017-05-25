#include <iostream>
#include "symbolicc++.h"
using namespace std;

int main(void)
{
 Symbolic x("x");
 cout << integrate(x+1, x);     // => 1/2*x^(2)+x
 Symbolic y("y");
 cout << df(y, x);              // => 0
 cout << df(y[x], x);           // => df(y[x],x)
 cout << df(exp(cos(y[x])), x); // => -sin(y[x])*df(y[x],x)*e^cos(y[x])
 return 0;
}
