#ifndef FILINGCONTROLLER_H
#define FILINGCONTROLLER_H

#include <vector>

#include "customer.h"
#include "vehicle.h"
#include "vehicleexpenserecord.h"
#include "employee.h"
#include "employeeexpenserecord.h"

class FilingController
{
private:
    QString fileName;

    void writeEmployeeRecords(std::vector<EmployeeExpenseRecord>, QString);
    void writeVehicleRecords(std::vector<VehicleExpenseRecord>, QString);
    std::vector<EmployeeExpenseRecord> readEmployeeRecords(QString);
    std::vector<VehicleExpenseRecord> readVehicleRecords(QString);

public:
    // General Functions
    void initialSetup();
    void clearDatabase();

    // Writer Functions
    void writeCustomerList(std::vector<Customer>);
    void writeVehiclesList(std::vector<Vehicle>);    
    void writeEmployeeList(std::vector<Employee>);


    // Reader Functions
    std::vector<Customer> readCustomerList();
    std::vector<Vehicle> readVehiclesList();
    std::vector<Employee> readEmployeesList();    
};

#endif // FILINGCONTROLLER_H
