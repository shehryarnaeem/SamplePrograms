#include "person.h"

Person::Person(QString name1="",QString address1="",QString phone1="")
{
    name=name1;
    address=address1;
    phone=phone1;
}
Person::Person(const Person &obj)
{
    this->name=obj.name;
    this->address=obj.address;
    this->phone=obj.phone;
}
void Person::set_name(QString name1)
{
    name=name1;
}
void Person::set_address(QString address1)
{
    address=address1;
}
void Person::set_phone(QString phone1)
{
    phone=phone1;
}
QString Person::get_name()const
{
    return name;
}
QString Person::get_address()const
{
    return address;
}
QString Person::get_phone()const
{
    return phone;
}
