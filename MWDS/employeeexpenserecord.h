#ifndef EMPLOYEEEXPENSERECORD_H
#define EMPLOYEEEXPENSERECORD_H

#include "record.h"
#include <QString>

class EmployeeExpenseRecord : public Record
{
private:
    double salaryPaid;

public:
    EmployeeExpenseRecord(QString, QString, double);
    void set_salaryPaid(double);
    double get_salaryPaid()const;
};

#endif // EMPLOYEEEXPENSERECORD_H
