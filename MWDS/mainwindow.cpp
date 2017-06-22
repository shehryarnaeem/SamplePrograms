#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "filingcontroller.h"

#include "addcustomerdialog.h"
#include "addemployeedialog.h"
#include "addemployeerecorddialog.h"
#include "addtransportdialog.h"
#include "addtransportrecorddialog.h"

#include <vector>
#include <QMessageBox>
#include <QTableWidget>
#include <QtDebug>

FilingController f;

bool firstLoad = true;
bool adding = false;

std::vector<Customer> customerList;
std::vector<Employee> employeeList;
std::vector<EmployeeExpenseRecord> employeeRecords;
int currentEmployeeIndex;
std::vector<Vehicle> transportList;
std::vector<VehicleExpenseRecord> transportRecords;
int currentTransportIndex;

// --------------------------------------------

// Customer Methods
void AddCustomer(Customer toAdd)
{
    customerList.push_back(toAdd);
    f.writeCustomerList(customerList);
}

void LoadCustomers(QTableWidget* table)
{
    table->setRowCount(0);

    customerList = f.readCustomerList();

    table->setRowCount(customerList.size());

    for (int x = 0; x < customerList.size(); x++)
    {
        //if(table->rowCount() <= x) table->insertRow(x);

        for (int y = 0; y < 6; y++)
        {
            QString d;

            switch (y)
            {
            case 0:
                d = QString::number(customerList[x].get_id());
                break;

            case 1:
                d = customerList[x].get_name();
                break;

            case 2:
                d = customerList[x].get_address();
                break;

            case 3:
                d = customerList[x].get_phone();
                break;

            case 4:
                d = QString::number(customerList[x].get_rate());
                break;

            case 5:
                d = QString::number(customerList[x].get_bottlesSold());
                break;
            }

            QTableWidgetItem *item = new QTableWidgetItem(d,QTableWidgetItem::Type);
            if (y != 5) item->setFlags(item->flags() ^ Qt::ItemIsEditable);
            table->setItem(x,y,item);
        }
    }

    table->repaint();
}

void RemoveCustomer(int index)
{
    customerList.erase(customerList.begin() + index);
    f.writeCustomerList(customerList);
}

void EditBottlesOfCustomer(int index, int value)
{
    customerList[index].set_bottlesSold(value);
    f.writeCustomerList(customerList);
}

// Employee Methods
void AddEmployee(Employee toAdd)
{
    employeeList.push_back(toAdd);
    f.writeEmployeeList(employeeList);
}

void LoadEmployees(QComboBox* comboBox)
{
    employeeList = f.readEmployeesList();

    if (employeeList.size() == 0) return;

    for (int x = 0; x < employeeList.size(); x++)
    {
        comboBox->addItem(employeeList[x].get_name());
    }
}

void RemoveEmployee(int index)
{
    employeeList.erase(employeeList.begin() + index);
    f.writeEmployeeList(employeeList);
}

void AddEmployeeRecord(EmployeeExpenseRecord toAdd)
{
    employeeRecords.push_back(toAdd);
    employeeList[currentEmployeeIndex].set_records(employeeRecords);
    f.writeEmployeeList(employeeList);
}

void LoadEmployeeRecords(int index, QTableWidget* table, QLabel* lbl_address, QLabel* lbl_phone, QLabel* lbl_age, QLabel* lbl_role, QLabel* lbl_salary)
{
    lbl_address->setText(employeeList[index].get_address());
    lbl_phone->setText(employeeList[index].get_phone());
    lbl_age->setText(QString::number(employeeList[index].get_age()));
    lbl_role->setText(employeeList[index].get_role());
    lbl_salary->setText(QString::number(employeeList[index].get_salary()));

    employeeRecords = employeeList[index].get_records();

    table->setRowCount(0);
    table->setRowCount(employeeRecords.size());

    for (int x = 0; x < employeeRecords.size(); x++)
    {
        for (int y = 0; y < 3; y++)
        {
            QString d;

            switch (y)
            {
            case 0:
                d = employeeRecords[x].get_date();
                break;

            case 1:
                d = employeeRecords[x].get_description();
                break;

            case 2:
                d = QString::number(employeeRecords[x].get_salaryPaid());
                break;
            }

            QTableWidgetItem *item = new QTableWidgetItem(d,QTableWidgetItem::Type);
            item->setFlags(item->flags() ^ Qt::ItemIsEditable);
            table->setItem(x,y,item);
        }
    }

    table->repaint();
}

void RemoveEmployeeRecord(int index)
{
    employeeRecords.erase(employeeRecords.begin() + index);
    employeeList[currentEmployeeIndex].set_records(employeeRecords);
    f.writeEmployeeList(employeeList);
}

// Transport Methods
void AddTransport(Vehicle toAdd)
{
    transportList.push_back(toAdd);
    f.writeVehiclesList(transportList);
}

void LoadTransport(QComboBox* comboBox)
{
    transportList = f.readVehiclesList();

    if (transportList.size() == 0) return;

    for (int x = 0; x < transportList.size(); x++)
    {
        comboBox->addItem(transportList[x].get_regNo());
    }
}

void RemoveTransport(int index)
{
    transportList.erase(transportList.begin() + index);
    f.writeVehiclesList(transportList);
}

void AddTransportRecord(VehicleExpenseRecord toAdd)
{
    transportRecords.push_back(toAdd);
    transportList[currentTransportIndex].set_records(transportRecords);
    f.writeVehiclesList(transportList);
}

void LoadTransportRecords(int index, QTableWidget* table, QLabel* lbl_regNo, QLabel* lbl_areaCode)
{
    lbl_regNo->setText(transportList[index].get_regNo());
    lbl_areaCode->setText(QString::number(transportList[index].get_areaCode()));

    transportRecords = transportList[index].get_records();

    table->setRowCount(0);
    table->setRowCount(transportRecords.size());

    for (int x = 0; x < transportRecords.size(); x++)
    {
        for (int y = 0; y < 4; y++)
        {
            QString d;

            switch (y)
            {
            case 0:
                d = transportRecords[x].get_date();
                break;

            case 1:
                d = transportRecords[x].get_description();
                break;

            case 2:
                d = QString::number(transportRecords[x].get_fuelcost());
                break;

            case 3:
                d = QString::number(transportRecords[x].get_repaircost());
                break;
            }

            QTableWidgetItem *item = new QTableWidgetItem(d,QTableWidgetItem::Type);
            item->setFlags(item->flags() ^ Qt::ItemIsEditable);
            table->setItem(x,y,item);
        }
    }

    table->repaint();
}

void RemoveTransportRecord(int index)
{
    transportRecords.erase(transportRecords.begin() + index);
    transportList[currentTransportIndex].set_records(transportRecords);
    f.writeVehiclesList(transportList);
}

// --------------------------------------------

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    f.initialSetup();

    QStringList columnHeaderNamesCustomers;
    columnHeaderNamesCustomers << "ID" << "Customer Name" << "Address" << "Phone No." << "Rate" << "Bottles Sold";
    ui->tableWidgetCustomers->setColumnCount(6);
    ui->tableWidgetCustomers->setHorizontalHeaderLabels(columnHeaderNamesCustomers);

    QStringList columnHeaderNamesEmployees;
    columnHeaderNamesEmployees << "Date" << "Description" << "Salary Paid";
    ui->tableWidgetEmployees->setColumnCount(3);
    ui->tableWidgetEmployees->setHorizontalHeaderLabels(columnHeaderNamesEmployees);

    QStringList columnHeaderNamesTransport;
    columnHeaderNamesTransport << "Date" << "Description" << "Fuel Cost" << "Repair Cost";
    ui->tableWidgetTransport->setColumnCount(4);
    ui->tableWidgetTransport->setHorizontalHeaderLabels(columnHeaderNamesTransport);

    LoadCustomers(ui->tableWidgetCustomers);
    LoadEmployees(ui->comboBoxEmployee);
    LoadTransport(ui->comboBoxTransport);

    firstLoad = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

// --------------------------------------------

// Customer Slots / Events
void MainWindow::on_btn_AddCustomer_clicked()
{
    int result;
    AddCustomerDialog dialog(this);
    dialog.setWindowTitle("Add New Customer");
    result = dialog.exec();

    if (result == QDialog::Rejected)
    {
        return;
    }

    adding = true;

    QString name = dialog.customerName();
    QString address = dialog.address();
    QString phone = dialog.phone();
    double rate = dialog.rate();
    int bottlesSold = dialog.bottlesSold();

    Customer newCustomer(name, address, phone, rate, bottlesSold);

    ui->tableWidgetCustomers->insertRow(ui->tableWidgetCustomers->rowCount());

    ui->tableWidgetCustomers->setItem(ui->tableWidgetCustomers->rowCount() - 1, 0, new QTableWidgetItem(QString::number(newCustomer.get_id())));
    ui->tableWidgetCustomers->setItem(ui->tableWidgetCustomers->rowCount() - 1, 1, new QTableWidgetItem(name));
    ui->tableWidgetCustomers->setItem(ui->tableWidgetCustomers->rowCount() - 1, 2, new QTableWidgetItem(address));
    ui->tableWidgetCustomers->setItem(ui->tableWidgetCustomers->rowCount() - 1, 3, new QTableWidgetItem(phone));
    ui->tableWidgetCustomers->setItem(ui->tableWidgetCustomers->rowCount() - 1, 4, new QTableWidgetItem(QString::number(rate)));
    ui->tableWidgetCustomers->setItem(ui->tableWidgetCustomers->rowCount() - 1, 5, new QTableWidgetItem(QString::number(bottlesSold)));

    ui->tableWidgetCustomers->repaint();

    AddCustomer(newCustomer);

    adding = false;
}

void MainWindow::on_btn_RemoveCustomer_clicked()
{
    if (ui->tableWidgetCustomers->selectedItems().size() == 0) return;

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm your action", "Are you sure you want to remove this item?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::No) return;

    int toDelete = ui->tableWidgetCustomers->selectedItems()[0]->row();
    RemoveCustomer(toDelete);
    ui->tableWidgetCustomers->removeRow(toDelete);
}

void MainWindow::on_btn_ShowSummary_clicked()
{
    double income = 0, employeeExpense = 0, transportFuelExpense = 0, transportRepairExpense = 0, totalExpenditure, totalProfit;

    for (int i = 0; i < customerList.size(); i++)
    {
        income += customerList[i].get_bottlesSold() * customerList[i].get_rate();
    }

    for (int i = 0; i < employeeList.size(); i++)
    {
        for (int j = 0; j < employeeList[i].get_records().size(); j++)
        {
            employeeExpense += employeeList[i].get_records()[j].get_salaryPaid();
        }
    }

    for (int i = 0; i < transportList.size(); i++)
    {
        for (int j = 0; j < transportList[i].get_records().size(); j++)
        {
            transportFuelExpense += transportList[i].get_records()[j].get_fuelcost();
            transportRepairExpense += transportList[i].get_records()[j].get_repaircost();
        }
    }

    totalExpenditure = employeeExpense + transportFuelExpense + transportRepairExpense;
    totalProfit = income - totalExpenditure;

    QString inc = QString::number(income);
    QString emp = QString::number(employeeExpense);
    QString fuel = QString::number(transportFuelExpense);
    QString rep = QString::number(transportRepairExpense);
    QString totalExp = QString::number(totalExpenditure);
    QString totalProf = QString::number(totalProfit);

    QString message = " --- Overall Summary ---\n\nIncome : " + inc + "\nTotal Employee Expenditure : " + emp +
            "\nTotal Transport Fuel Expenditure : " + fuel + "\nTotal Transport Repair Expenditure : " + rep +
            "\n\n------------------------\n\nTotal Income : " + inc + "\nTotal Expenditure : " + totalExp +
            "\n\nTotal Profit : " + totalProf;

    QMessageBox::about(this, "Summary", message);
}

void MainWindow::on_tableWidgetCustomers_itemChanged(QTableWidgetItem *item)
{
    if (firstLoad || adding || item->column() != 5) return;

    int toEdit = item->row();
    EditBottlesOfCustomer(toEdit, item->text().toInt());
}

// Employee Slots / Events
void MainWindow::on_btn_AddEmployee_clicked()
{
    int result;
    AddEmployeeDialog dialog(this);
    dialog.setWindowTitle("Add New Employee");
    result = dialog.exec();

    if (result == QDialog::Rejected)
    {
        return;
    }

    QString name = dialog.employeeName();
    QString address = dialog.address();
    QString phone = dialog.phone();
    int age = dialog.age();
    QString role = dialog.role();
    double salary = dialog.salary();
    std::vector<EmployeeExpenseRecord> records;

    AddEmployee(Employee(name, address, phone, age, role, salary, records));

    ui->comboBoxEmployee->addItem(name);
    ui->comboBoxEmployee->setCurrentIndex(ui->comboBoxEmployee->count() - 1);
}

void MainWindow::on_btn_RemoveEmployee_clicked()
{
    if (ui->comboBoxEmployee->count() == 0) return;

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm your action", "Are you sure you want to remove this item?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::No) return;

    int toDelete = ui->comboBoxEmployee->currentIndex();
    RemoveEmployee(toDelete);
    ui->comboBoxEmployee->removeItem(toDelete);
}

void MainWindow::on_comboBoxEmployee_currentIndexChanged(int index)
{
    if (index == -1) return;
    currentEmployeeIndex = index;
    LoadEmployeeRecords(index, ui->tableWidgetEmployees, ui->lblAddress, ui->lblPhone, ui->lblAge, ui->lblRole, ui->lblSalary);
}

void MainWindow::on_btn_AddEmployeeRecord_clicked()
{
    int result;
    AddEmployeeRecordDialog dialog(this);
    dialog.setWindowTitle("Add New Employee Record");
    result = dialog.exec();

    if (result == QDialog::Rejected)
    {
        return;
    }

    QString date = dialog.date();
    QString description = dialog.description();
    double salaryPaid = dialog.salaryPaid();

    EmployeeExpenseRecord newRecord(date, description, salaryPaid);

    ui->tableWidgetEmployees->insertRow(ui->tableWidgetEmployees->rowCount());

    ui->tableWidgetEmployees->setItem(ui->tableWidgetEmployees->rowCount() - 1, 0, new QTableWidgetItem(date));
    ui->tableWidgetEmployees->setItem(ui->tableWidgetEmployees->rowCount() - 1, 1, new QTableWidgetItem(description));
    ui->tableWidgetEmployees->setItem(ui->tableWidgetEmployees->rowCount() - 1, 2, new QTableWidgetItem(QString::number(salaryPaid)));

    ui->tableWidgetEmployees->repaint();

    AddEmployeeRecord(newRecord);
}

void MainWindow::on_btn_RemoveEmployeeRecord_clicked()
{
    if (ui->tableWidgetEmployees->selectedItems().size() == 0) return;

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm your action", "Are you sure you want to remove this item?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::No) return;

    int toDelete = ui->tableWidgetEmployees->selectedItems()[0]->row();
    RemoveEmployeeRecord(toDelete);
    ui->tableWidgetEmployees->removeRow(toDelete);
}

// Transport Slots / Events
void MainWindow::on_btn_AddTransport_clicked()
{
    int result;
    AddTransportDialog dialog(this);
    dialog.setWindowTitle("Add New Transport");
    result = dialog.exec();

    if (result == QDialog::Rejected)
    {
        return;
    }

    QString regNo = dialog.regNo();
    int areaCode = dialog.areaCode();
    std::vector<VehicleExpenseRecord> records;

    AddTransport(Vehicle(regNo, areaCode, records));

    ui->comboBoxTransport->addItem(regNo);
    ui->comboBoxTransport->setCurrentIndex(ui->comboBoxTransport->count() - 1);
}

void MainWindow::on_btn_RemoveTransport_clicked()
{
    if (ui->comboBoxTransport->count() == 0) return;

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm your action", "Are you sure you want to remove this item?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::No) return;

    int toDelete = ui->comboBoxTransport->currentIndex();
    RemoveTransport(toDelete);
    ui->comboBoxTransport->removeItem(toDelete);
}

void MainWindow::on_comboBoxTransport_currentIndexChanged(int index)
{
    if (index == -1) return;
    currentTransportIndex = index;
    LoadTransportRecords(index, ui->tableWidgetTransport, ui->lblRegistrationNumber, ui->lblAreaCode);
}

void MainWindow::on_btn_AddTransportRecord_clicked()
{
    int result;
    AddTransportRecordDialog dialog(this);
    dialog.setWindowTitle("Add New Transport Record");
    result = dialog.exec();

    if (result == QDialog::Rejected)
    {
        return;
    }

    QString date = dialog.date();
    QString description = dialog.description();
    double fuelCost = dialog.fuelCost();
    double repairCost = dialog.repairCost();

    VehicleExpenseRecord newRecord(date, description, fuelCost, repairCost);

    ui->tableWidgetTransport->insertRow(ui->tableWidgetTransport->rowCount());

    ui->tableWidgetTransport->setItem(ui->tableWidgetTransport->rowCount() - 1, 0, new QTableWidgetItem(date));
    ui->tableWidgetTransport->setItem(ui->tableWidgetTransport->rowCount() - 1, 1, new QTableWidgetItem(description));
    ui->tableWidgetTransport->setItem(ui->tableWidgetTransport->rowCount() - 1, 2, new QTableWidgetItem(QString::number(fuelCost)));
    ui->tableWidgetTransport->setItem(ui->tableWidgetTransport->rowCount() - 1, 3, new QTableWidgetItem(QString::number(repairCost)));

    ui->tableWidgetTransport->repaint();

    AddTransportRecord(newRecord);
}

void MainWindow::on_btn_RemoveTransportRecord_clicked()
{
    if (ui->tableWidgetTransport->selectedItems().size() == 0) return;

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm your action", "Are you sure you want to remove this item?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::No) return;

    int toDelete = ui->tableWidgetTransport->selectedItems()[0]->row();
    RemoveTransportRecord(toDelete);
    ui->tableWidgetTransport->removeRow(toDelete);
}
