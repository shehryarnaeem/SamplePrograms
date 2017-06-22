#ifndef VEHICLEEXPENSERECORD_H
#define VEHICLEEXPENSERECORD_H

#include "record.h"
#include <QString>

class VehicleExpenseRecord : public Record
{
private:
    double fuelcost;
    double repaircost;

public:
    VehicleExpenseRecord(QString, QString, double, double);
    void set_fuelcost(double);
    void set_repaircost(double);
    double get_fuelcost()const;
    double get_repaircost()const;
};
#endif // VEHICLEEXPENSERECORD_H
