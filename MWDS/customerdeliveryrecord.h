#ifndef CUSTOMERDELIVERYRECORD_H
#define CUSTOMERDELIVERYRECORD_H

#include "record.h"

class CustomerDeliveryRecord : public Record
{
private:
    int deliveryID;
    double rate;
    double amount;
    int quantity;

public:
    CustomerDeliveryRecord(std::string date1,std::string description1,int, double, double, int) : Record(date1,description1){}
    void set_deliveryID(int);
    void set_amount(double);
    void set_rate(double);
    void set_quantity(int);
    int get_deliveryID()const;
    double get_amount()const;
    double get_rate()const;
    int get_quantity()const;
    void addDeliveryRecord();
};
#endif // CUSTOMERDELIVERYRECORD_H
