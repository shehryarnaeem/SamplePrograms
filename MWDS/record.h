#ifndef RECORD_H
#define RECORD_H

#include <QString>

class Record
{
protected:
    QString date;
    QString description;
public:
    Record(QString,QString);
    void set_date(QString);
    void set_description(QString);
    QString get_date()const;
    QString get_description()const;
};
#endif // RECORD_H
