#include<iostream>
using namespace std;
class Person{
	protected:
	string name;
	public:
	void virtual getData()=0;
	bool virtual isOutstanding()=0;
	string getName()const
	{
		return name;
	}
	void putName(string name1)
	{
		name=name1;
    }
};
class Student:public Person
{
	float gpa;
	public:
		void getData()
		{
			cout<<"Enter the GPA:"<<endl;
			cin>>gpa;
		}
		bool isOutstanding()
		{
			if(gpa>3.5)
			{
				return true;
			}
			else
			{
				return false;
			}
	    }
};
class Professor:public Person
{
	int publications;
	public:
		Professor()
		{
		}
		void getData()
		{
			cout<<"Enter the publications:"<<endl;
			cin>>publications;
		}
		bool isOutstanding()
		{
			if(publications>100)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};
int main()
{
	int decision;
	Professor pro;
	Student stu;
	while(1)
	{
		cout<<"Choose 1:GPA,2:Publications or no to end"<<endl;
		cin>>decision;
		if(decision=1)
		{
			stu.getData();
		}
		else if(decision=2)
		{
			pro.getData();
		}
		else
		{
			break;
		}
	}
	
	
	
	
	return 0;
}
