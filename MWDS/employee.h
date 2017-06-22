#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "person.h"
#include "employeeexpenserecord.h"

#include <QString>
#include <vector>

class Employee : public Person
{
private:
    int emp_id;
    int emp_age;
    QString emp_role;
    double salary;
    static int count;
    std::vector<EmployeeExpenseRecord> records;

public:
    Employee();
    Employee(QString,QString,QString,int,QString,double, std::vector<EmployeeExpenseRecord>);
    Employee(const Employee&);
    void set_age(int);
    void set_role(QString);
    void set_salary(double);
    void set_records(std::vector<EmployeeExpenseRecord>);
    int get_empid()const;
    int get_age()const;
    QString get_role()const;
    double get_salary()const;
    std::vector<EmployeeExpenseRecord> get_records()const;
    static int get_count();
};
#endif // EMPLOYEE_H
