#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_AddCustomer_clicked();

    void on_btn_RemoveCustomer_clicked();

    void on_btn_ShowSummary_clicked();

    void on_btn_AddEmployee_clicked();

    void on_btn_RemoveEmployee_clicked();

    void on_comboBoxEmployee_currentIndexChanged(int index);

    void on_btn_AddEmployeeRecord_clicked();

    void on_btn_RemoveEmployeeRecord_clicked();

    void on_btn_AddTransport_clicked();

    void on_btn_RemoveTransport_clicked();

    void on_btn_AddTransportRecord_clicked();

    void on_btn_RemoveTransportRecord_clicked();

    void on_comboBoxTransport_currentIndexChanged(int index);

    void on_tableWidgetCustomers_itemChanged(QTableWidgetItem *item);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
