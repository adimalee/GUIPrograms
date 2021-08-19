#ifndef PRIORITYDIALOG_H
#define PRIORITYDIALOG_H

#include <QDialog>

namespace Ui {
class PriorityDialog;
}

class PriorityDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PriorityDialog(QWidget *parent = 0);
    ~PriorityDialog();

    int Process() const;
    QString ProcessName() const;
    int Space() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::PriorityDialog *ui;
};

#endif // PRIORITYDIALOG_H
