#include<iostream>
#include<fstream>
//#include<vector>
using namespace std;

class HumanResources{
    private:
    static int numofEmployees;
    vector<Employee> employees;
    public:
        HumanResources();
        HumanResources(int,string,string,string,int,int,string,double){
        }
        static void set_numofEmployees(int);
        static int get_numofEmployees()const;
        void set_employeedata(int,string,string,string,string,int,double);
        void print_employeedata()const;
        void AddnewEmployee(string,string,string,string,int,double);
        void remove_Employee(int);
        void pay_salary(int);
        static int get_count();
        ~HumanResources();
};
class FinancialReport{
    private:
        int totalBottlesSold;
        double totalIncome;
        double totalExpense;
        double totalProfit;
    public:
        FinancialReport();
        FinancialReport(int,double,double,double);
        void set_totalBottlesSold(int);
        void set_totalIncome(double);
        void set_totalProfit(double);
        void set_totalExpense(double);
        int get_totalBottlesSold()const;
        double get_totalIncome()const;
        double get_totalProfit()const;
        double get_totalExpense()const;
        void calculateGrossAmount();
};


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

class ManagementandFinance{
    private:
        double currentbalance;
        HumanResources *dep1;
};

