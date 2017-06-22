#include "customer.h"

int Customer::num_customers = 0;

Customer::Customer(QString name1="",QString address1="",QString phone1="",double rate1=0,int bottlesSold1=0):Person(name1,address1,phone1)
{
    ++num_customers;
    cus_id=num_customers;
    rate=rate1;
    bottlesSold=bottlesSold1;
}

void Customer::set_rate(double rate1)
{
    rate=rate1;
}

void Customer::set_bottlesSold(int bottlesSold1)
{
    bottlesSold=bottlesSold1;
}

int Customer::get_id() const
{
    return cus_id;
}

double Customer::get_rate() const
{
    return rate;
}

int Customer::get_bottlesSold() const
{
    return bottlesSold;
}

int Customer::get_num()
{
    return num_customers;
}
