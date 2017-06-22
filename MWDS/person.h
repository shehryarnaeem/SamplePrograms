#ifndef PERSON_H
#define PERSON_H

#include <QString>

class Person
{
protected:
    QString name;
    QString address;
    QString phone;
public:
    Person();
    Person(QString,QString,QString);
    Person(const Person&);
    void set_name(QString);
    void set_address(QString);
    void set_phone(QString);
    QString get_name()const;
    QString get_address()const;
    QString get_phone()const;
};
#endif // PERSON_H
