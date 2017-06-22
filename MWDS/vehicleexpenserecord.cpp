#include "vehicleexpenserecord.h"

VehicleExpenseRecord::VehicleExpenseRecord(QString date1,QString description1,double fuelcost1,double repaircost1):Record(date1,description1)
{
    fuelcost=fuelcost1;
    repaircost=repaircost1;
}

void VehicleExpenseRecord::set_fuelcost(double fuelcost1)
{
    fuelcost=fuelcost1;
}

void VehicleExpenseRecord::set_repaircost(double repaircost1)
{
    repaircost=repaircost1;
}

double VehicleExpenseRecord::get_fuelcost()const
{
    return fuelcost;
}

double VehicleExpenseRecord::get_repaircost()const
{
    return repaircost;
}
