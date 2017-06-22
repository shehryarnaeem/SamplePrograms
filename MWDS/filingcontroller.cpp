#include "filingcontroller.h"

#include <QFile>
#include <QTextStream>

// General Functions
void FilingController::initialSetup()
{
    // Creates files
    QFile file;

    fileName = "CustomersList.txt";
    file.setFileName(fileName);
    file.open(QIODevice::Append);
    file.close();

    fileName = "VehiclesList.txt";
    file.setFileName(fileName);
    file.open(QIODevice::Append);
    file.close();

    fileName = "VehicleRecords.txt";
    file.setFileName(fileName);
    file.open(QIODevice::Append);
    file.close();

    fileName = "EmployeeList.txt";
    file.setFileName(fileName);
    file.open(QIODevice::Append);
    file.close();

    fileName = "EmployeeRecords.txt";
    file.setFileName(fileName);
    file.open(QIODevice::Append);
    file.close();
}

void FilingController::clearDatabase()
{
    // Deletes and recreates files
    QFile file;

    fileName = "CustomersList.txt";
    file.setFileName(fileName);
    file.remove();

    fileName = "VehiclesList.txt";
    file.setFileName(fileName);
    file.remove();

    fileName = "VehicleRecords.txt";
    file.setFileName(fileName);
    file.remove();

    fileName = "EmployeeList.txt";
    file.setFileName(fileName);
    file.remove();

    fileName = "EmployeeRecords.txt";
    file.setFileName(fileName);
    file.remove();

    initialSetup();
}

// Writer Functions
void FilingController::writeCustomerList(std::vector<Customer> data)
{
    fileName = "CustomersList.txt";
    QFile file(fileName);
    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);

    for (int i = 0; i < data.size(); i++)
    {
        QString toWrite = data[i].get_name() + "," + data[i].get_address() + "," + data[i].get_phone() + "," +
                QString::number(data[i].get_rate()) + "," + QString::number(data[i].get_bottlesSold());

        out << toWrite << endl;
    }

    file.close();
}

void FilingController::writeVehiclesList(std::vector<Vehicle> data)
{
    fileName = "VehiclesList.txt";
    QFile file(fileName);

    QFile t("VehicleRecords.txt");
    t.remove();

    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);

    for (int i = 0; i < data.size(); i++)
    {
        QString toWrite = data[i].get_regNo() + "," + QString::number(data[i].get_areaCode());
        out << toWrite << endl;

        writeVehicleRecords(data[i].get_records(), data[i].get_regNo());
    }

    file.close();
}

void FilingController::writeVehicleRecords(std::vector<VehicleExpenseRecord> data, QString vehicleRegNo)
{
    fileName = "VehicleRecords.txt";
    QFile file(fileName);
    file.open(QIODevice::Append);
    QTextStream out(&file);

    out << "-" << vehicleRegNo << "-" << endl;
    for (int i = 0; i < data.size(); i++)
    {
        QString toWrite = data[i].get_date() + "," + data[i].get_description() + "," +
                QString::number(data[i].get_fuelcost()) + "," + QString::number(data[i].get_repaircost());

        out << toWrite << endl;
    }

    file.close();
}

void FilingController::writeEmployeeList(std::vector<Employee> data)
{
    fileName = "EmployeeList.txt";
    QFile file(fileName);

    QFile t("EmployeeRecords.txt");
    t.remove();

    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);

    for (int i = 0; i < data.size(); i++)
    {
        QString toWrite = data[i].get_name() + "," + data[i].get_address() + "," + data[i].get_phone() + "," +
                QString::number(data[i].get_age()) + "," + data[i].get_role() + "," + QString::number(data[i].get_salary());

        out << toWrite << endl;

        writeEmployeeRecords(data[i].get_records(), data[i].get_name());
    }

    file.close();
}

void FilingController::writeEmployeeRecords(std::vector<EmployeeExpenseRecord> data, QString name)
{
    fileName = "EmployeeRecords.txt";
    QFile file(fileName);
    file.open(QIODevice::Append);
    QTextStream out(&file);

    out << "-" << name << "-" << endl;
    for (int i = 0; i < data.size(); i++)
    {
        QString toWrite = data[i].get_date() + "," + data[i].get_description() + "," + QString::number(data[i].get_salaryPaid());
        out << toWrite << endl;
    }

    file.close();
}

// Reader Functions
std::vector<Customer> FilingController::readCustomerList()
{
    fileName = "CustomersList.txt";
    QFile file(fileName);
    file.open(QIODevice::ReadOnly);
    QTextStream in(&file);

    std::vector<Customer> data;

    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList parsed = line.split(",");
        data.push_back(Customer(parsed[0], parsed[1], parsed[2], parsed[3].toDouble(), parsed[4].toInt()));
    }

    file.close();
    return data;
}

std::vector<Vehicle> FilingController::readVehiclesList()
{
    fileName = "VehiclesList.txt";
    QFile file(fileName);
    file.open(QIODevice::ReadOnly);
    QTextStream in(&file);

    std::vector<Vehicle> data;

    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList parsed = line.split(",");
        std::vector<VehicleExpenseRecord> records = readVehicleRecords(parsed[0]);
        data.push_back(Vehicle(parsed[0], parsed[1].toInt(), records));
    }

    file.close();
    return data;
}

std::vector<VehicleExpenseRecord> FilingController::readVehicleRecords(QString vehicleRegNo)
{
    fileName = "VehicleRecords.txt";
    QFile file(fileName);
    file.open(QIODevice::ReadOnly);
    QTextStream in(&file);

    std::vector<VehicleExpenseRecord> data;

    while(!in.atEnd())
    {
        if (in.readLine() == "-" + vehicleRegNo + "-")
        {
            while(!in.atEnd())
            {
                QString line = in.readLine();

                if (line[0] == '-') break;

                QStringList parsed = line.split(",");
                data.push_back(VehicleExpenseRecord(parsed[0], parsed[1], parsed[2].toDouble(), parsed[3].toDouble()));
            }

            break;
        }
    }

    file.close();
    return data;
}

std::vector<Employee> FilingController::readEmployeesList()
{
    fileName = "EmployeeList.txt";
    QFile file(fileName);
    file.open(QIODevice::ReadOnly);
    QTextStream in(&file);

    std::vector<Employee> data;

    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList parsed = line.split(",");
        std::vector<EmployeeExpenseRecord> records = readEmployeeRecords(parsed[0]);
        data.push_back(Employee(parsed[0], parsed[1], parsed[2], parsed[3].toInt(), parsed[4], parsed[5].toDouble(), records));
    }

    file.close();
    return data;
}

std::vector<EmployeeExpenseRecord> FilingController::readEmployeeRecords(QString name)
{
    fileName = "EmployeeRecords.txt";
    QFile file(fileName);
    file.open(QIODevice::ReadOnly);
    QTextStream in(&file);

    std::vector<EmployeeExpenseRecord> data;

    while(!in.atEnd())
    {
        if (in.readLine() == "-" + name + "-")
        {
            while(!in.atEnd())
            {
                QString line = in.readLine();

                if (line[0] == '-') break;

                QStringList parsed = line.split(",");
                data.push_back(EmployeeExpenseRecord(parsed[0], parsed[1], parsed[2].toDouble()));
            }

            break;
        }
    }

    file.close();
    return data;
}
