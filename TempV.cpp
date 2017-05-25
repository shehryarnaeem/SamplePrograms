#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Vehicle{
	private:
		int vehicleID;
		string regNo;
		int areaCode;
		static int count;
	public:
		Vehicle();
		Vehicle(string,int);
		Vehicle(int,string,int);
		Vehicle(const Vehicle &obj)
		{
			this->vehicleID=obj.vehicleID;
			this->regNo=obj.regNo;
			this->areaCode=obj.areaCode;
		}
		void set_regNo(string);
		void set_areaCode(int);
		int get_vehicleID()const;
		string get_regNo()const;
		int get_areaCode()const;
		static int get_count();
		static void dec_count();
		~Vehicle();
};
int Vehicle::count=0;  //this count gets updated whenever a vehicle object is created
Vehicle::Vehicle()
{
	areaCode=0;
	vehicleID=0;
	regNo='\0';
//	++count;
}
Vehicle::Vehicle(string reg,int ac)   //ID would be alloted by this program for a vehicle that is why it is not included in the parameters
{
	
	vehicleID=count;
	regNo=reg;
	areaCode=ac;
	++count;
}
Vehicle::Vehicle(int ID,string reg,int ac)
{
	vehicleID=ID;
	regNo=reg;
	areaCode=ac;
}
void Vehicle::set_regNo(string reg)
{
	regNo=reg;
}
void Vehicle::set_areaCode(int ac)
{
	areaCode=ac;
}
int Vehicle::get_vehicleID()const
{
	return vehicleID;
}
string Vehicle::get_regNo()const
{
	return regNo;
}
int Vehicle::get_areaCode()const
{
	return areaCode;
}
int Vehicle::get_count()
{
	return count;
}
void Vehicle::dec_count()
{
	--count; 
}
Vehicle::~Vehicle()
{
}
class TransportationDep{
	private:
		vector<Vehicle>vehicles;
	public:
		TransportationDep()
		{		
		}
		void set_vehicleData(); //Incase if a vehicle data is to be updated this function is used
		void get_vehicleData()const; //this displays vehicle data
		void addNewVehicle(string,int);
		void removeVehicle();
		~TransportationDep();
};
void TransportationDep::addNewVehicle(string reg,int code)
{
		Vehicle temp(reg,code);
		int ID=temp.get_vehicleID();
		vehicles.push_back(temp);
		cout<<"ID: "<<temp.get_vehicleID()<<endl;
}
void TransportationDep::get_vehicleData()const
{
	int ID;
	cout<<"Enter the ID:"<<endl;
	cin>>ID;
	cout<<"ID :  "<<vehicles[ID].get_vehicleID()<<endl;
	cout<<"Registeration Number: "<<vehicles[ID].get_regNo()<<endl;
	cout<<"Area Code:"<<vehicles[ID].get_areaCode()<<endl;
}
void TransportationDep::removeVehicle(){
	/*To remove a vehicle I have entered an empty object and then swapped it with the vehicle object to be removed
	  then with the help of pop_back it gets removed.*/
	int ID;
	cout<<"Removing Vehicle"<<endl;
	cout<<"Enter the ID:"<<endl;
	cin>>ID;
	Vehicle temp;
	vehicles.push_back(temp);
	int i=Vehicle::get_count();
	swap(vehicles[ID],vehicles[i]);
	vehicles.pop_back();	
}
void TransportationDep::set_vehicleData()
{
	int ID;
	string reg;
	int ac;
	cout<<"Enter the ID:"<<endl;
	cin>>ID;
	cout<<"Enter the registration number:"<<endl;
	cin>>reg;
	vehicles[ID].set_regNo(reg);
	cout<<"Enter the area code:"<<endl;
	cin>>ac;
	vehicles[ID].set_areaCode(ac);
}
TransportationDep::~TransportationDep()
{
	vehicles.clear(); //this function will call the destructors of Vehicle objects
}
int main()
{
	string regno;
	int ac;
	cout<<"Enter the Reg NO:"<<endl;
	cin>>regno;
	cout<<"Enter the area code:"<<endl;
	cin>>ac;
	TransportationDep t1;
	t1.addNewVehicle(regno,ac);
	t1.addNewVehicle(regno,ac);
	t1.addNewVehicle(regno,ac);
	t1.get_vehicleData();
	t1.get_vehicleData();
	t1.removeVehicle();
	t1.get_vehicleData();
	t1.get_vehicleData();
	t1.get_vehicleData();
	t1.get_vehicleData();
	cout<<"add"<<endl;
	string abc="Khs";
	int ac1=123;
	t1.addNewVehicle(abc,ac1);
	t1.get_vehicleData();
	t1.get_vehicleData();
	t1.get_vehicleData();
	t1.get_vehicleData();
}
