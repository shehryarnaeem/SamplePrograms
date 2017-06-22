#include "vehicle.h"

int Vehicle::count=0;  //this count gets updated whenever a vehicle object is created
Vehicle::Vehicle()
{
    ++count;
}

Vehicle::Vehicle(QString reg,int ac, std::vector<VehicleExpenseRecord> records1)   //ID would be alloted by this program for a vehicle that is why it is not included in the parameters
{
    ++count;
    vehicleID=count;
    regNo=reg;
    areaCode=ac;
    records = records1;
}
Vehicle::Vehicle(const Vehicle &obj)
{
    ++count;
    this->vehicleID=count;
    this->regNo=obj.regNo;
    this->areaCode=obj.areaCode;
    this->records=obj.records;
}
void Vehicle::set_regNo(QString reg)
{
    regNo=reg;
}
void Vehicle::set_areaCode(int ac)
{
    areaCode=ac;
}
void Vehicle::set_records(std::vector<VehicleExpenseRecord> records1)
{
    records = records1;
}

int Vehicle::get_vehicleID()const
{
    return vehicleID;
}
QString Vehicle::get_regNo()const
{
    return regNo;
}
int Vehicle::get_areaCode()const
{
    return areaCode;
}
std::vector<VehicleExpenseRecord> Vehicle::get_records() const
{
    return records;
}

int Vehicle::get_count()
{
    return count;
}
