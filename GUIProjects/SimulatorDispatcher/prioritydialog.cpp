#include "prioritydialog.h"
#include "ui_prioritydialog.h"

PriorityDialog::PriorityDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PriorityDialog)
{
    ui->setupUi(this);
}

PriorityDialog::~PriorityDialog()
{
    delete ui;
}

void PriorityDialog::on_buttonBox_accepted()
{
    accept();
}

void PriorityDialog::on_buttonBox_rejected()
{
    reject();
}

int PriorityDialog::Process() const
{
    return ui->ProcessID->value();
}

QString PriorityDialog::ProcessName() const
{
    return ui->ProcessName->text();
}

int PriorityDialog::Space() const
{
    return ui->Priority->value();
}

