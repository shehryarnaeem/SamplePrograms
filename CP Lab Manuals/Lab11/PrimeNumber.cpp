#include<iostream>
using namespace std;
class PrimeNumber{
	long long int primeNo;
	public:
		PrimeNumber()
		{
			primeNo=1;
		}
		PrimeNumber(long long int x)
		{
			primeNo=x;
		}
		 long long int get_pm()const
		{
			return primeNo;
		}
		PrimeNumber operator ++()
		{
			++this->primeNo;
			for(long long int div=2;div!=this->primeNo;div++)
			{
				while(this->primeNo%div==0)
				{
					++this->primeNo;
				}
			}
			return *this;
		}
		
		PrimeNumber operator ++(int x)
		{
			++this->primeNo;
			for(int div=2;div!=this->primeNo;div++)
			{
				while(this->primeNo%div==0)
				{
					++this->primeNo;
				}
			}
			return *this;
		}
		PrimeNumber operator--()
		{
			--this->primeNo;
			for(long long int div=2;div!=this->primeNo&&this->primeNo!=0;div++)
			{
				while(this->primeNo%div==0)
				{
					--this->primeNo;
				}
			}
			return *this;
		}
		PrimeNumber operator--(int x)
		{
			--this->primeNo;
			for(long long int div=2;div!=this->primeNo&&this->primeNo!=0;div++)
			{
				while(this->primeNo%div==0)
				{
					--this->primeNo;
				}
			}
			return *this;
		}
		
};
int main()
{
	long long int x;
	 cin>>x;
	PrimeNumber pm(x);
	pm++;
	cout<<pm.get_pm()<<endl;
	pm--;
	cout<<pm.get_pm();
	return 0;
}
