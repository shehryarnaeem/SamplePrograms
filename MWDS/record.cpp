#include "record.h"

Record::Record(QString date1,QString desc1)
{
    date=date1;
    description=desc1;
}

void Record::set_date(QString date1)
{
    date=date1;
}

void Record::set_description(QString desc1)
{
    description=desc1;
}

QString Record::get_date()const
{
    return date;
}

QString Record::get_description()const
{
    return description;
}
