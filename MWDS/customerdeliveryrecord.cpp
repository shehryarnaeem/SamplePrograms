include "customerdeliveryrecord.h"

CustomerDeliveryRecord::CustomerDeliveryRecord(string data1,string description1,int id,double amnt1,double rate1,int qty):Record(date1,description1)
{
    deliveryID=id;
    amount=amnt1;
    rate=rate1;
    quantity=qty;
}

void CustomerDeliveryRecord::set_deliveryID(int id)
{
    deliveryID=id;
}

void CustomerDeliveryRecord::set_amount(double amnt1)
{
    amount=amnt1;
}

void CustomerDeliveryRecord::set_rate(double rate1)
{
    rate=rate1;
}

void CustomerDeliveryRecord::set_quantity(int qty)
{
    quantity=qty;
}

int CustomerDeliveryRecord::get_deliveryID()const
{
    return deliveryID;
}

double CustomerDeliveryRecord::get_amount()const
{
    return amount;
}

double CustomerDeliveryRecord::get_rate()const
{
    return rate;
}

int CustomerDeliveryRecord::get_quantity()const
{
    return quantity;
}

void CustomerDeliveryRecord::addDeliveryRecord()
{
    //filing
}
