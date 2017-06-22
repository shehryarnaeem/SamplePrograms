#include "employee.h"

int Employee::count=0;

Employee::Employee(QString name1="",QString address1="",QString phone1="", int emp_age1=0,QString emp_role1="",double salary1=0, std::vector<EmployeeExpenseRecord> records1 = std::vector<EmployeeExpenseRecord>()):Person(name1,address1,phone1)
{
    ++count;
    emp_id=count;
    emp_age=emp_age1;
    emp_role=emp_role1;
    salary=salary1;
    records = records1;
}
Employee::Employee(const Employee &obj):Person(obj)
{
    ++count;
    this->emp_age=obj.emp_age;
    this->emp_id=count;
    this->emp_role=obj.emp_role;
    this->salary=obj.salary;
    this->records=obj.records;
}
void Employee::set_age(int emp_age1)
{
    emp_age=emp_age1;
}
void Employee::set_role(QString emp_role1)
{
    emp_role=emp_role1;
}
void Employee::set_salary(double salary1)
{
    salary=salary1;
}
void Employee::set_records(std::vector<EmployeeExpenseRecord> records1)
{
    records = records1;
}
int Employee::get_empid() const
{
    return emp_id;
}
int Employee::get_age() const
{
    return emp_age;
}
QString Employee::get_role() const
{
    return emp_role;
}
double Employee::get_salary() const
{
    return salary;
}
std::vector<EmployeeExpenseRecord> Employee::get_records() const
{
    return records;
}
int Employee::get_count()
{
    return count;
}
