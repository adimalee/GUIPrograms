#include "widget.h"
#include "ui_widget.h"
#include "prioritydialog.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QStringList HeaderList;
    setWindowTitle("Simulator");
    ui->tableWidget->setColumnCount(3);
    HeaderList << "Name" << "Process" << "Space";
    ui->tableWidget->setHorizontalHeaderLabels(HeaderList);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_Add_clicked()
{
    int Res, ProcessID, Space, FillSpace;
    QString ProcessName;
    PriorityDialog process(this);
    process.setWindowTitle("First Fit Algorithm");
    Res = process.exec();
    if(Res == QDialog::Rejected)
        return;
    ProcessID = process.Process();
    ProcessName = process.ProcessName();
    Space = process.Space();
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    FillSpace = ui->tableWidget->rowCount() - 1;
    ui->tableWidget->setItem(FillSpace, PNAME, new QTableWidgetItem(ProcessName));

    ui->tableWidget->setItem(FillSpace, PROCESS, new QTableWidgetItem(QString::number(ProcessID)));

    ui->tableWidget->setItem(FillSpace, SPACE, new QTableWidgetItem(QString::number(Space)));


}
/*
void Widget::Set_List(QList<QString> ProcessName, int Process, int Space)
{
    QVector<QString> load_set(Process);
    for(int i = 0; i < ; i++)
    {
        Process[i] = P
    }

}

*/



