#include<iostream>
using namespace std;

class Employee
{
	public:
		string name;
		string code;
		Employee()
		{
		}
		Employee(string name1,string code1)
		{
			name=name1;
			code=code1;
		}
		
};

class Consultant: public virtual Employee
{
	public:
		int yearsOfExperience;
		Consultant(int ye)
		{
			yearsOfExperience=ye;
		}
		
};

class Manager: public virtual Employee
{
	public:
		int noOfTeams;
		Manager(int noT)
		{
			noOfTeams=noT;
		}
		
};

class ConsultantManager: public Consultant, public Manager
{
	public:
//		ConsultantManager(string n, string c, int noy, int d)
//		{
//			name = n;
//			code = c;
//			yearsOfExperience = noy;
//			noOfTeams = d;
//		}
       ConsultantManager(string name1,string code1,int ye,int noT):Employee(name1,code1),Consultant(ye),Manager(noT)
       {
       	
	   }
		void display()
		{
			cout << "Name is: " << name << "\n";
			cout << "Code is: " << code << "\n";
			cout << "Years of Experience is: " << yearsOfExperience << "\n";
			cout << "Number of teams is: " << noOfTeams << "\n";
		}
		
};


int main()
{
	ConsultantManager obj("Name", "Code", 0, 1);
	obj.display();
	return 0;
}
