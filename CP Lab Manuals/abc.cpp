#include<iostream>
#include<vector>
using namespace std;
class Vehicle{
	private:
		int vehicleID;
		string regNo;
		int areaCode;
	public:
		Vehicle();
		Vehicle(int ID,string reg,int ac)
		{
			vehicleID=ID;
			regNo=reg;
			areaCode=ac;
		}
//		void set_vehicleID(int);
//		void set_regNo(string);
//		void set_areaCode(int);
//		int get_vehicleID()const;
//		string get_regNo()const;
		int get_areaCode()const
		{
			return areaCode;
		}
};
class TransportationDep{
	private:
		vector<Vehicle*>vehicles;
	public:
		TransportationDep()
		{
			
		}
		//TransportationDep(int,string,int);
		void set_vehicleData();
		void get_vehicleData()const
		{
			for(int i=0;i<2;i++)
	        {
	        	cout<<vehicles[i]->get_areaCode()<<endl;
		
	        }
			
		}
		void addNewVehicle(int,string,int);
		void removeVehicle();
};
void TransportationDep::addNewVehicle(int ID,string reg,int ac)
{
	Vehicle *temp=new Vehicle(ID,reg,ac);
	vehicles.push_back(temp);
	delete temp;
	
}
int main()
{
	TransportationDep *t1=new TransportationDep;
	t1->addNewVehicle(12,"abc",1);
	t1->addNewVehicle(12,"abc",1);
	t1->get_vehicleData();
	
	
	
	
}
