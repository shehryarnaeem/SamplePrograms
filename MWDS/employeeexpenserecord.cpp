#include "employeeexpenserecord.h"

EmployeeExpenseRecord::EmployeeExpenseRecord(QString date1, QString description1, double salaryPaid1) : Record(date1,description1)
{
    salaryPaid = salaryPaid1;
}

void EmployeeExpenseRecord::set_salaryPaid(double salaryPaid1)
{
    salaryPaid = salaryPaid1;
}

double EmployeeExpenseRecord::get_salaryPaid()const
{
    return salaryPaid;
}
