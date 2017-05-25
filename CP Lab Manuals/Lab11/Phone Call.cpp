#include<iostream>
using namespace std;
class PhoneCall{
	int number;
	float length;
	float rate;
	float trate;
	public:
		PhoneCall()
		{
			number=0;
			length=0;
			rate=0;
		}
		PhoneCall(int pnum,float len,float rate1)
		{
			number=pnum;
			length=len;
			rate=rate1;
		}
		void setData(int pnum,float len,float rate1)
		{
			number=pnum;
			length=len;
			rate=rate1;
		}
		void calc_rate()
		{
			trate=length*rate;
		}
		friend bool operator ==(PhoneCall &obj1,PhoneCall &obj2);
};
bool operator ==(PhoneCall &obj1,PhoneCall &obj2)
{
	return obj1.number==obj2.number;
}

int main()
{
	PhoneCall obj[3];
	int pnum,i=0;
	float len,rate1;
	cout<<"Enter the number,length and rate per minute of the phonecall:"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"Enter the number for"<<i+1<<"call:"<<endl;
		cin>>pnum;
		cout<<"Enter the length for"<<i+1<<"call:"<<endl;
		cin>>len;
		cout<<"Enter the rate for"<<i+1<<"call:"<<endl;
		cin>>rate1;
		obj[i].setData(pnum,len,rate1);
		obj[i].calc_rate();
		
	}
	for(int i=0;i<3;i++)
		{
			for(int j=i+1;j<3;j++)
			{
				while(obj[i]==obj[j])
				{
					cout<<"Same number!Enter another phone call:"<<endl;
					cout<<"Enter the number for"<<j<<"call:"<<endl;
					cin>>pnum;
					cout<<"Enter the length for"<<j<<"call:"<<endl;
					cin>>len;
					cout<<"Enter the rate for"<<j<<"call:"<<endl;
					cin>>rate1;
					obj[j].setData(pnum,len,rate1);
					obj[j].calc_rate();
				}
		    }
	    }
	
	return 0;
}
