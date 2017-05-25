#include<iostream>
using namespace std;
class Complex{
	double real,imaginary;
	public:
		Complex()
		{
			real=0;
			imaginary=0;
		}
		Complex(double real1)
		{
			real=real1;
			imaginary=0;
		}
		Complex(double real1,double imaginary1)
		{
			real=real1;
			imaginary=imaginary1;
		}
		friend bool operator ==(Complex &obj1,Complex &obj2);
		friend istream &operator>>(istream &inputStream,Complex &obj);
		friend ostream &operator<<(ostream &outputStream,Complex &obj);
		Complex operator +(Complex obj);
		Complex operator -(Complex obj);
		Complex operator *(Complex obj);
};
bool  operator ==(Complex &obj1,Complex &obj2)
{
	return (obj1.real==obj2.real)&&(obj1.imaginary==obj2.imaginary);
}
istream &operator>>(istream &inputStream,Complex &obj)
{
	cout<<"Enter the complex number:"<<endl;
	cout<<"real Part:"<<endl;
	cin>>obj.real;
	cout<<"Imaginary:"<<endl;
	cin>>obj.imaginary;
	return inputStream;
}
ostream &operator<<(ostream &outputStream,Complex &obj)
{
	cout<<"Complex Number:"<<endl;
	cout<<obj.real<<"+"<<obj.imaginary<<"*i"<<endl;
	return outputStream;
}
Complex Complex::operator +(Complex obj)
{
	Complex temp;
	temp.real=this->real+obj.real;
	temp.imaginary=this->imaginary+obj.imaginary;
	return temp;
}
Complex Complex::operator -(Complex obj)
{
	Complex temp;
	temp.real=this->real-obj.real;
	temp.imaginary=this->imaginary-obj.imaginary;
	return temp;
}
Complex Complex::operator *(Complex obj)
{
	Complex temp;
	temp.real=(this->real*obj.real)-(this->imaginary*obj.imaginary);
	temp.imaginary=(this->real*obj.imaginary)+(this->imaginary*obj.real);
	return temp;
}
int main()
{
	Complex c(2,1),c1(2,1),c2;
	cout<<c;
	cout<<c1;
	c2=c*c1;
	if(c==c1)
	{
		cout<<"true"<<endl;
	}
	cout<<c2;
	
	return 0;
}
