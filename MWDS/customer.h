#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "person.h"
#include <QString>

class Customer : public Person
{
private:
    int cus_id;
    double rate;
    int bottlesSold;
    static int num_customers;

public:
    Customer();
    Customer(QString,QString,QString,double,int);
    void set_rate(double);
    void set_bottlesSold(int);
    int get_id()const;
    double get_rate()const;
    int get_bottlesSold()const;
    static int get_num();
};
#endif // CUSTOMER_H
